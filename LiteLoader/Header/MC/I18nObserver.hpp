// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class I18nObserver {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_I18NOBSERVER
public:
    class I18nObserver& operator=(class I18nObserver const&) = delete;
    I18nObserver(class I18nObserver const&) = delete;
    I18nObserver() = delete;
#endif

public:
    /*0*/ virtual ~I18nObserver();
    /*1*/ virtual void __unk_vfn_0() = 0;
    /*2*/ virtual void __unk_vfn_1() = 0;
    /*3*/ virtual void __unk_vfn_2() = 0;

protected:

private:

};