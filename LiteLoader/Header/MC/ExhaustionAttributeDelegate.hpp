// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "AttributeInstanceDelegate.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ExhaustionAttributeDelegate : public AttributeInstanceDelegate {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXHAUSTIONATTRIBUTEDELEGATE
public:
    class ExhaustionAttributeDelegate& operator=(class ExhaustionAttributeDelegate const &) = delete;
    ExhaustionAttributeDelegate(class ExhaustionAttributeDelegate const &) = delete;
    ExhaustionAttributeDelegate() = delete;
#endif


public:
    /*0*/ virtual ~ExhaustionAttributeDelegate();
    /*1*/ virtual void tick();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_EXHAUSTIONATTRIBUTEDELEGATE
public:
#endif
    MCAPI ExhaustionAttributeDelegate(class AttributeInstance const &);


};