// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "LiquidBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LiquidBlockDynamic : public LiquidBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LIQUIDBLOCKDYNAMIC
public:
    class LiquidBlockDynamic& operator=(class LiquidBlockDynamic const &) = delete;
    LiquidBlockDynamic(class LiquidBlockDynamic const &) = delete;
    LiquidBlockDynamic() = delete;
#endif


public:
    /*0*/ virtual ~LiquidBlockDynamic();
    /*19*/ virtual void __unk_vfn_19();
    /*30*/ virtual void __unk_vfn_30();
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*34*/ virtual void __unk_vfn_34();
    /*35*/ virtual void __unk_vfn_35();
    /*36*/ virtual void __unk_vfn_36();
    /*37*/ virtual void __unk_vfn_37();
    /*38*/ virtual void __unk_vfn_38();
    /*39*/ virtual void __unk_vfn_39();
    /*40*/ virtual void __unk_vfn_40();
    /*41*/ virtual void __unk_vfn_41();
    /*43*/ virtual void __unk_vfn_43();
    /*44*/ virtual void __unk_vfn_44();
    /*45*/ virtual void __unk_vfn_45();
    /*46*/ virtual void __unk_vfn_46();
    /*47*/ virtual void __unk_vfn_47();
    /*48*/ virtual void __unk_vfn_48();
    /*58*/ virtual void __unk_vfn_58();
    /*59*/ virtual void __unk_vfn_59();
    /*72*/ virtual void __unk_vfn_72();
    /*79*/ virtual void __unk_vfn_79();
    /*104*/ virtual void __unk_vfn_104();
    /*112*/ virtual void entityInside(class BlockSource &, class BlockPos const &, class Actor &) const;
    /*124*/ virtual void __unk_vfn_124();
    /*126*/ virtual void __unk_vfn_126();
    /*127*/ virtual void __unk_vfn_127();
    /*132*/ virtual void __unk_vfn_132();
    /*148*/ virtual void __unk_vfn_148();
    /*165*/ virtual void __unk_vfn_165();
    /*179*/ virtual void __unk_vfn_179();
    /*180*/ virtual void __unk_vfn_180();
    /*181*/ virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /*184*/ virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*187*/ virtual void __unk_vfn_187();
    /*199*/ virtual void __unk_vfn_199();
    /*203*/ virtual void __unk_vfn_203();
    /*204*/ virtual void __unk_vfn_204();
    /*205*/ virtual void __unk_vfn_205();
    /*206*/ virtual void __unk_vfn_206();
    /*207*/ virtual void __unk_vfn_207();
    /*208*/ MCAPI std::string const & getDescriptionId() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LIQUIDBLOCKDYNAMIC
public:
#endif
    MCAPI LiquidBlockDynamic(std::string const &, int, class Material const &);
    MCAPI class std::array<bool, 4> getSpread(class BlockSource &, class BlockPos const &) const;
    MCAPI bool shouldBecomeStatic(class BlockSource &, class BlockPos const &, class Random &) const;

//private:
    MCAPI bool _canSpreadTo(class BlockSource &, class BlockPos const &, class BlockPos const &, unsigned char) const;
    MCAPI int _getSlopeDistance(class BlockSource &, class BlockPos const &, int, int) const;
    MCAPI bool _isWaterBlocking(class BlockSource &, class BlockPos const &, class BlockPos const &, unsigned char) const;
    MCAPI bool _tick(class BlockSource &, class BlockPos const &, class Random &, bool) const;
    MCAPI void _trySpreadTo(class BlockSource &, class BlockPos const &, int, class BlockPos const &, unsigned char) const;

private:


};