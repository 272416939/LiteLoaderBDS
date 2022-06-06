// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class TameableDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TAMEABLEDEFINITION
public:
    class TameableDefinition& operator=(class TameableDefinition const &) = delete;
    TameableDefinition(class TameableDefinition const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TAMEABLEDEFINITION
public:
#endif
    MCAPI TameableDefinition();
    MCAPI void addTamingItemByName(std::string const &);
    MCAPI void initialize(class EntityContext &, class TameableComponent &) const;
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class TameableDefinition>> &);


};