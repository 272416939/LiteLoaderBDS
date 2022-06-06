// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class RangedAttackDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANGEDATTACKDEFINITION
public:
    class RangedAttackDefinition& operator=(class RangedAttackDefinition const &) = delete;
    RangedAttackDefinition(class RangedAttackDefinition const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RANGEDATTACKDEFINITION
public:
#endif
    MCAPI RangedAttackDefinition();
    MCAPI void initialize(class EntityContext &, class RangedAttackGoal &);
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class RangedAttackDefinition>> &);


};