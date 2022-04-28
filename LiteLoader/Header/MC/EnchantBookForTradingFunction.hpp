// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class EnchantBookForTradingFunction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENCHANTBOOKFORTRADINGFUNCTION
public:
    class EnchantBookForTradingFunction& operator=(class EnchantBookForTradingFunction const &) = delete;
    EnchantBookForTradingFunction(class EnchantBookForTradingFunction const &) = delete;
    EnchantBookForTradingFunction() = delete;
#endif

public:
    /*0*/ virtual ~EnchantBookForTradingFunction();
    /*
    inline int apply(class ItemStack & a0, class Random & a1, struct Trade const & a2, class LootTableContext & a3){
        int (EnchantBookForTradingFunction::*rv)(class ItemStack &, class Random &, struct Trade const &, class LootTableContext &);
        *((void**)&rv) = dlsym("?apply@EnchantBookForTradingFunction@@UEAAHAEAVItemStack@@AEAVRandom@@AEBUTrade@@AEAVLootTableContext@@@Z");
        return (this->*rv)(std::forward<class ItemStack &>(a0), std::forward<class Random &>(a1), std::forward<struct Trade const &>(a2), std::forward<class LootTableContext &>(a3));
    }
    inline int apply(class ItemInstance & a0, class Random & a1, struct Trade const & a2, class LootTableContext & a3){
        int (EnchantBookForTradingFunction::*rv)(class ItemInstance &, class Random &, struct Trade const &, class LootTableContext &);
        *((void**)&rv) = dlsym("?apply@EnchantBookForTradingFunction@@UEAAHAEAVItemInstance@@AEAVRandom@@AEBUTrade@@AEAVLootTableContext@@@Z");
        return (this->*rv)(std::forward<class ItemInstance &>(a0), std::forward<class Random &>(a1), std::forward<struct Trade const &>(a2), std::forward<class LootTableContext &>(a3));
    }
    inline void apply(class ItemStack & a0, class Random & a1, class LootTableContext & a2){
        void (EnchantBookForTradingFunction::*rv)(class ItemStack &, class Random &, class LootTableContext &);
        *((void**)&rv) = dlsym("?apply@EnchantBookForTradingFunction@@UEAAXAEAVItemStack@@AEAVRandom@@AEAVLootTableContext@@@Z");
        return (this->*rv)(std::forward<class ItemStack &>(a0), std::forward<class Random &>(a1), std::forward<class LootTableContext &>(a2));
    }
    inline void apply(class ItemInstance & a0, class Random & a1, class LootTableContext & a2){
        void (EnchantBookForTradingFunction::*rv)(class ItemInstance &, class Random &, class LootTableContext &);
        *((void**)&rv) = dlsym("?apply@EnchantBookForTradingFunction@@UEAAXAEAVItemInstance@@AEAVRandom@@AEAVLootTableContext@@@Z");
        return (this->*rv)(std::forward<class ItemInstance &>(a0), std::forward<class Random &>(a1), std::forward<class LootTableContext &>(a2));
    }
    */

protected:

private:
    MCAPI class EnchantmentInstance _getRandomEnchantAndCalculateCost(class ItemStackBase &, class Random &, int &) const;

};