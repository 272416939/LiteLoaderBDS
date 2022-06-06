// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class TrustingDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRUSTINGDEFINITION
public:
    class TrustingDefinition& operator=(class TrustingDefinition const &) = delete;
    TrustingDefinition(class TrustingDefinition const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TRUSTINGDEFINITION
public:
#endif
    MCAPI TrustingDefinition();
    MCAPI void addTrustItemByName(std::string const &);
    MCAPI void initialize(class EntityContext &, class TrustingComponent &) const;
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class TrustingDefinition>> &);


};