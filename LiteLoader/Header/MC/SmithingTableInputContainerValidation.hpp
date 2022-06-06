// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerValidationBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SmithingTableInputContainerValidation : public ContainerValidationBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SMITHINGTABLEINPUTCONTAINERVALIDATION
public:
    class SmithingTableInputContainerValidation& operator=(class SmithingTableInputContainerValidation const &) = delete;
    SmithingTableInputContainerValidation(class SmithingTableInputContainerValidation const &) = delete;
    SmithingTableInputContainerValidation() = delete;
#endif


public:
    /*0*/ virtual ~SmithingTableInputContainerValidation();
    /*1*/ virtual bool isValidSlotForContainer(class ContainerScreenContext const &, class Container const &, int) const;
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual int getAvailableSetCount(int, class ItemStackBase const &) const;
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual bool canItemMoveToContainer(class ItemStackBase const &) const;
    /*7*/ virtual bool canDestroy(class ContainerScreenContext const &) const;
    /*8*/ virtual int getContainerOffset(class ContainerScreenContext const &) const;
    /*9*/ virtual int getContainerSize(class ContainerScreenContext const &, class Container const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SMITHINGTABLEINPUTCONTAINERVALIDATION
public:
#endif


};