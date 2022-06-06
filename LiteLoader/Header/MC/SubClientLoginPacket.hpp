// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SubClientLoginPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUBCLIENTLOGINPACKET
public:
    class SubClientLoginPacket& operator=(class SubClientLoginPacket const &) = delete;
    SubClientLoginPacket(class SubClientLoginPacket const &) = delete;
#endif


public:
    /*0*/ virtual ~SubClientLoginPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*5*/ virtual bool disallowBatching() const;
    /*6*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SUBCLIENTLOGINPACKET
public:
#endif
    MCAPI SubClientLoginPacket();


};