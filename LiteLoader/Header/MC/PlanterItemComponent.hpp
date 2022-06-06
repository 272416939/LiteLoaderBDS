// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PlanterItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLANTERITEMCOMPONENT
public:
    class PlanterItemComponent& operator=(class PlanterItemComponent const &) = delete;
    PlanterItemComponent(class PlanterItemComponent const &) = delete;
    PlanterItemComponent() = delete;
#endif


public:
    /*0*/ virtual ~PlanterItemComponent();
    /*1*/ virtual bool isNetworkComponent() const;
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual bool useOn(class ItemStack &, class Actor &, class BlockPos const &, unsigned char, class Vec3 const &) const;
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /*6*/ virtual void initializeFromNetwork(class CompoundTag const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLANTERITEMCOMPONENT
public:
#endif
    MCAPI PlanterItemComponent(class ComponentItem *);
    MCAPI bool calculatePlacePos(class ItemStackBase &, class Actor &, unsigned char &, class BlockPos &) const;
    MCAPI static void bindType();
    MCAPI static class HashedString const & getIdentifier();


};