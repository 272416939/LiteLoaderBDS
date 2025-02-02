// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class LegacyActorExtractApplySystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYACTOREXTRACTAPPLYSYSTEM
public:
    class LegacyActorExtractApplySystem& operator=(class LegacyActorExtractApplySystem const &) = delete;
    LegacyActorExtractApplySystem(class LegacyActorExtractApplySystem const &) = delete;
    LegacyActorExtractApplySystem() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEGACYACTOREXTRACTAPPLYSYSTEM
#endif
    MCAPI static struct TickingSystemWithInfo createApplySystem(std::vector<unsigned int> const &);
    MCAPI static struct TickingSystemWithInfo createCleanupSystem(std::vector<unsigned int> const &);
    MCAPI static struct TickingSystemWithInfo createExtractSystem(std::vector<unsigned int> const &);



};