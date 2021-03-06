
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_JSlider$AccessibleJSlider__
#define __javax_swing_JSlider$AccessibleJSlider__

#pragma interface

#include <javax/swing/JComponent$AccessibleJComponent.h>
extern "Java"
{
  namespace javax
  {
    namespace accessibility
    {
        class AccessibleRole;
        class AccessibleStateSet;
        class AccessibleValue;
    }
    namespace swing
    {
        class JSlider;
        class JSlider$AccessibleJSlider;
    }
  }
}

class javax::swing::JSlider$AccessibleJSlider : public ::javax::swing::JComponent$AccessibleJComponent
{

public: // actually protected
  JSlider$AccessibleJSlider(::javax::swing::JSlider *);
public:
  virtual ::javax::accessibility::AccessibleStateSet * getAccessibleStateSet();
  virtual ::javax::accessibility::AccessibleRole * getAccessibleRole();
  virtual ::javax::accessibility::AccessibleValue * getAccessibleValue();
  virtual ::java::lang::Number * getCurrentAccessibleValue();
  virtual jboolean setCurrentAccessibleValue(::java::lang::Number *);
  virtual ::java::lang::Number * getMinimumAccessibleValue();
  virtual ::java::lang::Number * getMaximumAccessibleValue();
private:
  static const jlong serialVersionUID = -6301740148041106789LL;
public: // actually package-private
  ::javax::swing::JSlider * __attribute__((aligned(__alignof__( ::javax::swing::JComponent$AccessibleJComponent)))) this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_JSlider$AccessibleJSlider__
