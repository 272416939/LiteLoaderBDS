// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "PredictableProjectile.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class FireworksRocketActor : public PredictableProjectile {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FIREWORKSROCKETACTOR
public:
    class FireworksRocketActor& operator=(class FireworksRocketActor const &) = delete;
    FireworksRocketActor(class FireworksRocketActor const &) = delete;
    FireworksRocketActor() = delete;
#endif


public:
    /*14*/ virtual ~FireworksRocketActor();
    /*41*/ virtual void __unk_vfn_41();
    /*47*/ virtual void lerpMotion(class Vec3 const &);
    /*49*/ virtual void normalTick();
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
    /*191*/ virtual void onSynchedDataUpdate(int);
    /*196*/ virtual void __unk_vfn_196();
    /*222*/ virtual void __unk_vfn_222();
    /*223*/ virtual void __unk_vfn_223();
    /*248*/ virtual void __unk_vfn_248();
    /*251*/ virtual void __unk_vfn_251();
    /*269*/ virtual void __unk_vfn_269();
    /*273*/ virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /*274*/ virtual void addAdditionalSaveData(class CompoundTag &) const;
    /*277*/ virtual void __unk_vfn_277();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FIREWORKSROCKETACTOR
#endif
    MCAPI FireworksRocketActor(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI void init(class Level &, class Vec3 const &, class CompoundTag const &, class Vec3 const &, struct ActorUniqueID, bool);
    MCAPI bool isAttachedToEntity() const;
    MCAPI void postNormalTick();
    MCAPI void setDispensed(bool);

//private:
    MCAPI void checkAchievement() const;
    MCAPI void dealExplosionDamage();
    MCAPI void initTagData(class Random &);


private:


};