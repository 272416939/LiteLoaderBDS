// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptDefinitionTrigger {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTDEFINITIONTRIGGER
public:
    class ScriptDefinitionTrigger& operator=(class ScriptDefinitionTrigger const &) = delete;
    ScriptDefinitionTrigger(class ScriptDefinitionTrigger const &) = delete;
    ScriptDefinitionTrigger() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTDEFINITIONTRIGGER
public:
#endif
    MCAPI static class Scripting::ClassBindingBuilder<class DefinitionTrigger> bind(struct Scripting::Version);


};