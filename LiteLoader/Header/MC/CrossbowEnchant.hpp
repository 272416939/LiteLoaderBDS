// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Enchant.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CrossbowEnchant {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CROSSBOWENCHANT
public:
    class CrossbowEnchant& operator=(class CrossbowEnchant const &) = delete;
    CrossbowEnchant(class CrossbowEnchant const &) = delete;
    CrossbowEnchant() = delete;
#endif


public:
    /*0*/ virtual ~CrossbowEnchant();
    /*1*/ virtual bool isCompatibleWith(enum Enchant::Type) const;
    /*2*/ virtual int getMinCost(int) const;
    /*3*/ virtual int getMaxCost(int) const;
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual int getMaxLevel() const;
    /*6*/ virtual void __unk_vfn_6();
    /*7*/ virtual void __unk_vfn_7();
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
    /*10*/ virtual void __unk_vfn_10();
    /*11*/ virtual void __unk_vfn_11();
    /*12*/ virtual void __unk_vfn_12();
    /*13*/ virtual void __unk_vfn_13();
    /*14*/ virtual bool _isValidEnchantmentTypeForCategory(enum Enchant::Type) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CROSSBOWENCHANT
public:
#endif
    MCAPI CrossbowEnchant(enum Enchant::Type, enum Enchant::Frequency, class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>, int, bool, int);
    MCAPI static std::vector<enum Enchant::Type> const VALID_ENCHANTMENTS;


};