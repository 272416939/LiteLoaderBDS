// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BlockPosTrackerSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKPOSTRACKERSYSTEM
public:
    class BlockPosTrackerSystem& operator=(class BlockPosTrackerSystem const &) = delete;
    BlockPosTrackerSystem(class BlockPosTrackerSystem const &) = delete;
    BlockPosTrackerSystem() = delete;
#endif


public:
    /*0*/ virtual ~BlockPosTrackerSystem();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void tick(class EntityRegistry &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKPOSTRACKERSYSTEM
public:
#endif
    MCAPI static void _tickBlockPosTrackerComponent(class Actor *, class BlockPosTrackerComponent &);


};