// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class FreezingSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FREEZINGSYSTEM
public:
    class FreezingSystem& operator=(class FreezingSystem const &) = delete;
    FreezingSystem(class FreezingSystem const &) = delete;
    FreezingSystem() = delete;
#endif


public:
    /*0*/ virtual ~FreezingSystem();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void tick(class EntityRegistry &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FREEZINGSYSTEM
public:
#endif

//private:

private:
    MCAPI static class mce::UUID const FREEZE_EFFECT_UUID;
    MCAPI static int const VULNERABLE_MOB_FREEZE_DAMAGE;


};