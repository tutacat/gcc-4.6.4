/* Check if system supports SIMD */
#include <signal.h>

#if defined(__i386__) || defined(__x86_64__)
# include "cpuid.h"
#endif

extern void abort (void);
extern void exit (int);

static void
sig_ill_handler (int sig)
{
  exit(0);
}

static void __attribute__((noinline))
check_vect (void)
{
  signal(SIGILL, sig_ill_handler);
#if defined(__PAIRED__)
  /* 750CL paired-single instruction, 'ps_mul %v0,%v0,%v0'.  */
 asm volatile (".long 0x10000032");
#elif defined(__ppc__) || defined(__ppc64__) || defined(__powerpc__) || defined(powerpc)
  /* Altivec instruction, 'vor %v0,%v0,%v0'.  */
  asm volatile (".long 0x10000484");
#elif defined(__i386__) || defined(__x86_64__)
  {
    int a, b, c, d, want_level, want_c, want_d;

    /* Determine what instruction set we've been compiled for, and detect
       that we're running with it.  This allows us to at least do a compile
       check for, e.g. SSE4.1 when the machine only supports SSE2.  */
# ifdef __XOP__
    want_level = 0x80000001, want_c = bit_XOP, want_d = 0;
# elif defined(__AVX__)
    want_level = 1, want_c = bit_AVX, want_d = 0;
# elif defined(__SSE4_1__)
    want_level = 1, want_c = bit_SSE4_1, want_d = 0;
# elif defined(__SSSE3__)
    want_level = 1, want_c = bit_SSSE3, want_d = 0;
# else
    want_level = 1, want_c = 0, want_d = bit_SSE2;
#  if defined(__sun__) && defined(__svr4__)
    /* Before Solaris 9 4/04, trying to execute an SSE2 instruction gives
       SIGILL even if the CPU can handle them.  */
    asm volatile ("unpcklpd %xmm0,%xmm2");
#  endif
# endif

    if (!__get_cpuid (want_level, &a, &b, &c, &d)
	|| ((c & want_c) | (d & want_d)) == 0)
      exit (0);
  }
#elif defined(__sparc__)
  asm volatile (".word\t0x81b007c0");
#elif defined(__arm__)
  {
    /* On some processors without NEON support, this instruction may
       be a no-op, on others it may trap, so check that it executes
       correctly.  */
    long long a = 0, b = 1;
    asm ("vorr %P0, %P1, %P2"
	 : "=w" (a)
	 : "0" (a), "w" (b));
    if (a != 1)
      exit (0);
  }
#endif
  signal (SIGILL, SIG_DFL);
}
