// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class TargetGoalDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TARGETGOALDEFINITION
public:
    class TargetGoalDefinition& operator=(class TargetGoalDefinition const &) = delete;
    TargetGoalDefinition(class TargetGoalDefinition const &) = delete;
    TargetGoalDefinition() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TARGETGOALDEFINITION
public:
#endif
    MCAPI void initialize(class EntityContext &, class TargetGoal &);


};