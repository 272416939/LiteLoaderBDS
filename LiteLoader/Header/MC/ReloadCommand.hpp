// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ReloadCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RELOADCOMMAND
public:
    class ReloadCommand& operator=(class ReloadCommand const &) = delete;
    ReloadCommand(class ReloadCommand const &) = delete;
    ReloadCommand() = delete;
#endif


public:
    /*0*/ virtual ~ReloadCommand();
    /*1*/ virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RELOADCOMMAND
public:
#endif
    MCAPI static void setup(class CommandRegistry &);


};