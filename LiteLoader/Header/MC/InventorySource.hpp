// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class InventorySource {

#define AFTER_EXTRA
// Add Member There
public:
    enum class InventorySourceFlags
    {
        NoFlag = 0,
        WorldInteraction_Random = 1
    };

    InventorySourceType type = InventorySourceType::Invalid;
    ContainerID container = ContainerID::Invalid;
    InventorySourceFlags flags;
    inline InventorySource(ContainerID id)
        : container(id)
    {
    }
    inline InventorySource(InventorySourceType type)
        : type(type)
    {
    }
    inline InventorySource(InventorySourceType type, InventorySourceFlags flags)
        : type(type)
        , flags(flags)
    {
    }
    inline InventorySource(InventorySourceType type, ContainerID id)
        : type(type)
        , container(id)
    {
    }


#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INVENTORYSOURCE
public:
    class InventorySource& operator=(class InventorySource const &) = delete;
    InventorySource(class InventorySource const &) = delete;
    InventorySource() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INVENTORYSOURCE
public:
#endif
    MCAPI bool operator==(class InventorySource const &) const;
    MCAPI std::string toString() const;


};