// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ChunkBuildOrderPolicyBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKBUILDORDERPOLICYBASE
public:
    class ChunkBuildOrderPolicyBase& operator=(class ChunkBuildOrderPolicyBase const &) = delete;
    ChunkBuildOrderPolicyBase(class ChunkBuildOrderPolicyBase const &) = delete;
    ChunkBuildOrderPolicyBase() = delete;
#endif


public:
    /*0*/ virtual ~ChunkBuildOrderPolicyBase();
    /*1*/ virtual void __unk_vfn_1() = 0;
    /*2*/ virtual unsigned int registerForUpdates();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CHUNKBUILDORDERPOLICYBASE
public:
#endif


};