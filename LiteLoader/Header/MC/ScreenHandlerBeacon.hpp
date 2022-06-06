// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScreenHandlerBeacon {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCREENHANDLERBEACON
public:
    class ScreenHandlerBeacon& operator=(class ScreenHandlerBeacon const &) = delete;
    ScreenHandlerBeacon(class ScreenHandlerBeacon const &) = delete;
    ScreenHandlerBeacon() = delete;
#endif


public:
    /*0*/ virtual ~ScreenHandlerBeacon();
    /*1*/ virtual enum ItemStackNetResult handleAction(class ItemStackRequestAction const &);
    /*2*/ virtual enum ItemStackNetResult endRequest();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void postRequest(bool);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCREENHANDLERBEACON
public:
#endif
    MCAPI ScreenHandlerBeacon(class ContainerScreenContext const &, class ItemStackRequestActionHandler &);

//private:
    MCAPI enum ItemStackNetResult _handleBeaconPaymentAction(class ItemStackRequestActionBeaconPayment const &);

private:


};