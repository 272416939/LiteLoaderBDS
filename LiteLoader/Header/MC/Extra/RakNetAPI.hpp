//Extra Part For RakNet.hpp
#ifdef EXTRA_INCLUDE_PART
// Include Headers or Declare Types Here


#else
// Add Member There
struct SystemAddress {
public:
    char filler[17 * 8]; // uncertain?
    MCAPI const char* ToString(bool, char) const;
};
struct RakNetGUID {
    uint64_t unk;
    short unk8;
};
class AddressOrGUID {
    RakNetGUID guid;
    SystemAddress adr;
};

struct RakPeer {
public:
    RakPeer(RakPeer const&) = delete;
    RakPeer(RakPeer&&) = delete;
    SystemAddress getAdr(NetworkIdentifier const& ni) {
            SystemAddress rv;
            RakNetGUID guid = dAccess<RakNetGUID>(&ni, 8);
            SymCall("?GetSystemAddressFromGuid@RakPeer@RakNet@@UEBA?AUSystemAddress@2@URakNetGUID@2@@Z",
                    void, void*, SystemAddress*, RakNetGUID const*)(this, &rv, &guid);
            return rv;
    }
    MCAPI virtual int GetAveragePing(struct RakNet::AddressOrGUID);
    MCAPI virtual int GetLastPing(struct RakNet::AddressOrGUID) const;
    MCAPI virtual int GetLowestPing(struct RakNet::AddressOrGUID) const;

};
class RakNetSocket2;
struct SplitPacketChannel;
class BitStream;
#endif
