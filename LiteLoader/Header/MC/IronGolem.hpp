// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Mob.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class IronGolem : public Mob {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IRONGOLEM
public:
    class IronGolem& operator=(class IronGolem const &) = delete;
    IronGolem(class IronGolem const &) = delete;
    IronGolem() = delete;
#endif


public:
    /*14*/ virtual ~IronGolem();
    /*41*/ virtual void __unk_vfn_41();
    /*61*/ virtual void __unk_vfn_61();
    /*68*/ virtual void __unk_vfn_68();
    /*80*/ virtual float getShadowRadius() const;
    /*82*/ virtual void __unk_vfn_82();
    /*85*/ virtual void __unk_vfn_85();
    /*88*/ virtual void __unk_vfn_88();
    /*96*/ virtual void __unk_vfn_96();
    /*99*/ virtual void __unk_vfn_99();
    /*106*/ virtual void __unk_vfn_106();
    /*108*/ virtual void __unk_vfn_108();
    /*109*/ virtual void __unk_vfn_109();
    /*111*/ virtual void __unk_vfn_111();
    /*142*/ virtual void handleEntityEvent(enum ActorEvent, int);
    /*182*/ virtual void __unk_vfn_182();
    /*196*/ virtual void __unk_vfn_196();
    /*222*/ virtual void __unk_vfn_222();
    /*223*/ virtual void __unk_vfn_223();
    /*248*/ virtual void __unk_vfn_248();
    /*251*/ virtual void __unk_vfn_251();
    /*253*/ virtual void die(class ActorDamageSource const &);
    /*267*/ virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /*269*/ virtual void __unk_vfn_269();
    /*275*/ virtual void _playStepSound(class BlockPos const &, class Block const &);
    /*277*/ virtual void __unk_vfn_277();
    /*285*/ virtual void __unk_vfn_285();
    /*294*/ virtual void hurtEffects(class ActorDamageSource const &, float, bool, bool);
    /*300*/ virtual void aiStep();
    /*313*/ virtual void __unk_vfn_313();
    /*316*/ virtual bool doHurtTarget(class Actor *, enum ActorDamageCause const &);
    /*317*/ virtual void __unk_vfn_317();
    /*351*/ virtual void __unk_vfn_351();
    /*365*/ virtual void __unk_vfn_365();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IRONGOLEM
    MCVAPI bool useNewAi() const;
#endif
    MCAPI IronGolem(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI int getOfferFlowerTick() const;
    MCAPI void offerFlower(bool);



};