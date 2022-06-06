// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DefinitionEventLoader {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEFINITIONEVENTLOADER
public:
    class DefinitionEventLoader& operator=(class DefinitionEventLoader const &) = delete;
    DefinitionEventLoader(class DefinitionEventLoader const &) = delete;
    DefinitionEventLoader() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DEFINITIONEVENTLOADER
public:
#endif
    MCAPI static class DefinitionEvent loadEvent(class Json::Value, class SemVersion const &, enum TypeExecutingEvent, class EventResponseFactory const *);

//private:
    MCAPI static void _loadCollection(class DefinitionEvent &, class Json::Value, class SemVersion const &, enum TypeExecutingEvent, class EventResponseFactory const *);

private:


};