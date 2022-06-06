// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Material {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MATERIAL
public:
    class Material& operator=(class Material const &) = delete;
    Material(class Material const &) = delete;
    Material() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MATERIAL
public:
#endif
    MCAPI bool getBlocksMotion() const;
    MCAPI bool getBlocksPrecipitation() const;
    MCAPI float getTranslucency() const;
    MCAPI bool isAlwaysDestroyable() const;
    MCAPI bool isFlammable() const;
    MCAPI bool isLiquid() const;
    MCAPI bool isReplaceable() const;
    MCAPI bool isSolid() const;
    MCAPI bool isSolidBlocking() const;
    MCAPI bool isSuperHot() const;
    MCAPI bool isTopSolid(bool, bool) const;
    MCAPI bool isType(enum MaterialType) const;
    MCAPI bool operator!=(class Material const &) const;
    MCAPI bool operator==(class Material const &) const;
    MCAPI static void addMaterial(std::unique_ptr<class Material>);
    MCAPI static class Material const & getMaterial(enum MaterialType);
    MCAPI static void initMaterials();
    MCAPI static bool mInitialized;
    MCAPI static std::vector<std::unique_ptr<class Material>> mMaterials;
    MCAPI static void teardownMaterials();

//private:
    MCAPI static void _setupSurfaceMaterials();

private:


};