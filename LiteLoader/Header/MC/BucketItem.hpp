// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BucketItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BUCKETITEM
public:
    class BucketItem& operator=(class BucketItem const &) = delete;
    BucketItem(class BucketItem const &) = delete;
    BucketItem() = delete;
#endif


public:
    /*0*/ virtual ~BucketItem();
    /*5*/ virtual void __unk_vfn_5();
    /*7*/ virtual void __unk_vfn_7();
    /*10*/ virtual void __unk_vfn_10();
    /*12*/ virtual void __unk_vfn_12();
    /*47*/ virtual void __unk_vfn_47();
    /*49*/ virtual void __unk_vfn_49();
    /*52*/ virtual bool isDestructive(int) const;
    /*53*/ virtual bool isLiquidClipItem(int) const;
    /*62*/ virtual void __unk_vfn_62();
    /*63*/ virtual bool isValidAuxValue(int) const;
    /*66*/ virtual void __unk_vfn_66();
    /*67*/ virtual void __unk_vfn_67();
    /*68*/ virtual void __unk_vfn_68();
    /*71*/ virtual void __unk_vfn_71();
    /*75*/ virtual void __unk_vfn_75();
    /*76*/ virtual void __unk_vfn_76();
    /*79*/ virtual bool canUseOnSimTick() const;
    /*80*/ virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /*81*/ virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /*82*/ virtual enum ItemUseMethod useTimeDepleted(class ItemStack &, class Level *, class Player *) const;
    /*83*/ virtual void releaseUsing(class ItemStack &, class Player *, int) const;
    /*91*/ virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /*96*/ virtual unsigned char getMaxStackSize(class ItemDescriptor const &) const;
    /*107*/ virtual bool validFishInteraction(int) const;
    /*113*/ virtual struct Brightness getLightEmission(int) const;
    /*114*/ virtual struct TextureUVCoordinateSet const & getIcon(class ItemStackBase const &, int, bool) const;
    /*116*/ virtual class Item & setIcon(std::string const &, int);
    /*124*/ virtual std::string getAuxValuesDescription() const;
    /*127*/ virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, class Vec3 const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BUCKETITEM
public:
    MCVAPI bool isBucket() const;
    MCVAPI bool uniqueAuxValues() const;
#endif
    MCAPI BucketItem(std::string const &, int, enum BucketFillType);
    MCAPI static std::vector<struct std::pair<enum BucketFillType, enum ActorType>> const mFillTypeToEntityType;

//protected:
    MCAPI void addBucketEntitySaveData(class Actor &, class ItemStack &) const;
    MCAPI bool readBucketEntitySaveData(class BlockSource &, class Actor *, unsigned char, class BlockPos, class ItemInstance const &) const;

//private:
    MCAPI bool _emptyBucket(class BlockSource &, class Block const &, class BlockPos const &, class Actor *, class ItemStack const &, unsigned char) const;
    MCAPI bool _takeLiquid(class ItemStack &, class Actor &, class BlockPos const &) const;
    MCAPI bool _takePowderSnow(class ItemStack &, class Actor &, class BlockPos const &) const;

protected:

private:
    MCAPI static int const DRINK_DURATION;


};