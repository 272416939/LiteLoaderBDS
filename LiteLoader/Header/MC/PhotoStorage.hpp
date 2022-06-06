// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PhotoStorage {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PHOTOSTORAGE
public:
    class PhotoStorage& operator=(class PhotoStorage const &) = delete;
    PhotoStorage(class PhotoStorage const &) = delete;
    PhotoStorage() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PHOTOSTORAGE
public:
#endif
    MCAPI PhotoStorage(class Core::Path const &);
    MCAPI ~PhotoStorage();

//private:
    MCAPI void _readManifest();

private:
    MCAPI static std::string const BOOKS_DIR;
    MCAPI static std::string const MANIFEST_NAME;
    MCAPI static std::string const PHOTOITEM_DIR;
    MCAPI static std::string const PHOTO_DIR;


};