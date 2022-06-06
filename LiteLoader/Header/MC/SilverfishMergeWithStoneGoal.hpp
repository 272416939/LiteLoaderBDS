// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "RandomStrollGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SilverfishMergeWithStoneGoal : public RandomStrollGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SILVERFISHMERGEWITHSTONEGOAL
public:
    class SilverfishMergeWithStoneGoal& operator=(class SilverfishMergeWithStoneGoal const &) = delete;
    SilverfishMergeWithStoneGoal(class SilverfishMergeWithStoneGoal const &) = delete;
    SilverfishMergeWithStoneGoal() = delete;
#endif


public:
    /*0*/ virtual ~SilverfishMergeWithStoneGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*4*/ virtual void start();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SILVERFISHMERGEWITHSTONEGOAL
public:
#endif
    MCAPI SilverfishMergeWithStoneGoal(class Silverfish &);


};