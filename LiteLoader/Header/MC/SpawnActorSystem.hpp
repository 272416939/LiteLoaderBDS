// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SpawnActorSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPAWNACTORSYSTEM
public:
    class SpawnActorSystem& operator=(class SpawnActorSystem const &) = delete;
    SpawnActorSystem(class SpawnActorSystem const &) = delete;
    SpawnActorSystem() = delete;
#endif


public:
    /*0*/ virtual ~SpawnActorSystem();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void tick(class EntityRegistry &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SPAWNACTORSYSTEM
public:
#endif


};