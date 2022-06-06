// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

struct MolangScriptArg {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOLANGSCRIPTARG
public:
    MolangScriptArg() = delete;
#endif

public:
    MCAPI MolangScriptArg(struct MolangScriptArg const &);
    MCAPI MolangScriptArg(struct MolangScriptArg &&);
    MCAPI MolangScriptArg(int);
    MCAPI MolangScriptArg(float);
    MCAPI void clear();
    MCAPI struct MolangScriptArg & operator=(struct MolangScriptArg const &);
    MCAPI struct MolangScriptArg & operator=(struct MolangScriptArg &&);
    MCAPI ~MolangScriptArg();

protected:

private:
    MCAPI static struct MolangScriptArg const mDefaultReturnValue_break;
    MCAPI static struct MolangScriptArg const mDefaultReturnValue_emptyStringHash;
    MCAPI static struct MolangScriptArg const mDefaultReturnValue_float0;
    MCAPI static struct MolangScriptArg const mDefaultReturnValue_float1;
    MCAPI static struct MolangScriptArg const mDefaultReturnValue_floatNeg1;
    MCAPI static struct MolangScriptArg const mDefaultReturnValue_molangActorIdEmptyArrayPtr;
    MCAPI static struct MolangScriptArg const mDefaultReturnValue_structUV0;

};