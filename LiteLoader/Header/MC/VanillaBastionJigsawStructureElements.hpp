// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class VanillaBastionJigsawStructureElements {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLABASTIONJIGSAWSTRUCTUREELEMENTS
public:
    class VanillaBastionJigsawStructureElements& operator=(class VanillaBastionJigsawStructureElements const &) = delete;
    VanillaBastionJigsawStructureElements(class VanillaBastionJigsawStructureElements const &) = delete;
    VanillaBastionJigsawStructureElements() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VANILLABASTIONJIGSAWSTRUCTUREELEMENTS
public:
#endif
    MCAPI static void initialize(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class FeatureRegistry &, class JigsawStructureRegistry &);


};