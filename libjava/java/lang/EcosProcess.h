
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_lang_EcosProcess__
#define __java_lang_EcosProcess__

#pragma interface

#include <java/lang/Process.h>
#include <gcj/array.h>


class java::lang::EcosProcess : public ::java::lang::Process
{

public:
  void destroy();
  jint exitValue();
  ::java::io::InputStream * getErrorStream();
  ::java::io::InputStream * getInputStream();
  ::java::io::OutputStream * getOutputStream();
  jint waitFor();
  EcosProcess(JArray< ::java::lang::String * > *, JArray< ::java::lang::String * > *, ::java::io::File *, jboolean);
  static ::java::lang::Class class$;
};

#endif // __java_lang_EcosProcess__
