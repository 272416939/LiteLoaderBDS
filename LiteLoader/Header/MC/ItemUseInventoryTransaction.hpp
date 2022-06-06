// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ItemUseInventoryTransaction {

#define AFTER_EXTRA
// Add Member There
public:
enum ActionType;

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMUSEINVENTORYTRANSACTION
public:
    ItemUseInventoryTransaction() = delete;
#endif


public:
    /*0*/ virtual ~ItemUseInventoryTransaction();
    /*1*/ virtual void read(class ReadOnlyBinaryStream &);
    /*2*/ virtual void write(class BinaryStream &) const;
    /*3*/ virtual void postLoadItems(class BlockPalette &, bool);
    /*4*/ virtual enum InventoryTransactionError handle(class Player &, bool) const;
    /*5*/ virtual void onTransactionError(class Player &, enum InventoryTransactionError) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMUSEINVENTORYTRANSACTION
public:
#endif
    MCAPI ItemUseInventoryTransaction(class ItemUseInventoryTransaction const &);
    MCAPI class ItemUseInventoryTransaction & operator=(class ItemUseInventoryTransaction const &);
    MCAPI void resendBlocksAroundArea(class Player &, class BlockPos const &, unsigned char) const;
    MCAPI class ItemUseInventoryTransaction & setSelectedItem(class ItemStack const &);
    MCAPI static class BidirectionalUnorderedMap<enum ItemUseInventoryTransaction::ActionType, std::string> const actionTypeMap;


};