// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "BlockItem.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CoralFanBlockItem : public BlockItem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CORALFANBLOCKITEM
public:
    class CoralFanBlockItem& operator=(class CoralFanBlockItem const &) = delete;
    CoralFanBlockItem(class CoralFanBlockItem const &) = delete;
    CoralFanBlockItem() = delete;
#endif


public:
    /*0*/ virtual ~CoralFanBlockItem();
    /*5*/ virtual void __unk_vfn_5();
    /*7*/ virtual void __unk_vfn_7();
    /*10*/ virtual void __unk_vfn_10();
    /*12*/ virtual void __unk_vfn_12();
    /*41*/ virtual int getLevelDataForAuxValue(int) const;
    /*47*/ virtual void __unk_vfn_47();
    /*49*/ virtual void __unk_vfn_49();
    /*62*/ virtual void __unk_vfn_62();
    /*63*/ virtual bool isValidAuxValue(int) const;
    /*66*/ virtual void __unk_vfn_66();
    /*67*/ virtual void __unk_vfn_67();
    /*68*/ virtual void __unk_vfn_68();
    /*71*/ virtual void __unk_vfn_71();
    /*75*/ virtual void __unk_vfn_75();
    /*76*/ virtual void __unk_vfn_76();
    /*127*/ virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, class Vec3 const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CORALFANBLOCKITEM
public:
#endif
    MCAPI CoralFanBlockItem(std::string const &, int);


};