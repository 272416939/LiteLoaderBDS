// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "RandomStrollGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class RandomSwimmingGoal : public RandomStrollGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMSWIMMINGGOAL
public:
    class RandomSwimmingGoal& operator=(class RandomSwimmingGoal const &) = delete;
    RandomSwimmingGoal(class RandomSwimmingGoal const &) = delete;
    RandomSwimmingGoal() = delete;
#endif


public:
    /*0*/ virtual ~RandomSwimmingGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
    /*10*/ virtual bool _setWantedPosition();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RANDOMSWIMMINGGOAL
public:
#endif
    MCAPI RandomSwimmingGoal(class Mob &, float, int, int, int, bool);


};