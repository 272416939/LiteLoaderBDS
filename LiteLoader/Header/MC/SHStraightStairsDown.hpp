// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructurePiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SHStraightStairsDown : public StructurePiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHSTRAIGHTSTAIRSDOWN
public:
    class SHStraightStairsDown& operator=(class SHStraightStairsDown const &) = delete;
    SHStraightStairsDown(class SHStraightStairsDown const &) = delete;
    SHStraightStairsDown() = delete;
#endif


public:
    /*0*/ virtual ~SHStraightStairsDown();
    /*3*/ virtual enum StructurePieceType getType() const;
    /*4*/ virtual void addChildren(class StructurePiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &);
    /*5*/ virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SHSTRAIGHTSTAIRSDOWN
public:
#endif


};