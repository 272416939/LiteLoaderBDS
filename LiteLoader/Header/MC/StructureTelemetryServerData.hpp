// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class StructureTelemetryServerData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTURETELEMETRYSERVERDATA
public:
    class StructureTelemetryServerData& operator=(class StructureTelemetryServerData const &) = delete;
    StructureTelemetryServerData(class StructureTelemetryServerData const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STRUCTURETELEMETRYSERVERDATA
public:
#endif
    MCAPI StructureTelemetryServerData();
    MCAPI bool hasBeenActivatedByRedstone();
    MCAPI void setHasBeenActivedByRedstone();


};