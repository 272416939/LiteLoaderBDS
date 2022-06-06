// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class WeaponItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WEAPONITEMCOMPONENT
public:
    class WeaponItemComponent& operator=(class WeaponItemComponent const &) = delete;
    WeaponItemComponent(class WeaponItemComponent const &) = delete;
    WeaponItemComponent() = delete;
#endif


public:
    /*0*/ virtual ~WeaponItemComponent();
    /*1*/ virtual bool isNetworkComponent() const;
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /*6*/ virtual void initializeFromNetwork(class CompoundTag const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WEAPONITEMCOMPONENT
public:
#endif
    MCAPI WeaponItemComponent(class ComponentItem *);
    MCAPI void appendFormattedHovertext(class ItemStackBase const &, std::string &, bool) const;
    MCAPI void hitActor(class ItemStack &, class Actor &, class Mob &) const;
    MCAPI void hitBlock(class ItemStack &, class Block const &, class BlockPos const &, class Mob &) const;
    MCAPI void hurtActor(class ItemStack &, class Actor &, class Mob &) const;
    MCAPI static void bindType();
    MCAPI static class HashedString const & getIdentifier();


};