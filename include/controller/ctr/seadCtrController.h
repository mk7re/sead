#pragma once

#include "controller/seadController.h"
#include "seadCtrHidDevice.h"

// NOTE: This is incomplete. Besides, it should go in nnheaders probably
namespace nn
{
namespace hid
{
namespace CTR
{

class PadReader {
    public:
        // TODO: Document modes
        enum class StickClampMode : u8 {
            MODE_0
        };

    private:
        u8 field_0x00[0x38];
};

}
}
}

//////////////////////////////////////////////////

namespace sead
{

class CtrController : public Controller
{
    SEAD_RTTI_OVERRIDE(CtrController, Controller)
public:
    enum class ButtonEnum : u32 {
        BUTTON_A = 0x00000001,
        BUTTON_B = 0x00000002,
        BUTTON_0x00000004 = 0x00000004,
        BUTTON_X = 0x00000008,
        BUTTON_Y = 0x00000010,
        BUTTON_0x00000020 = 0x00000020,
        BUTTON_0x00000040 = 0x00000040,
        BUTTON_0x00000080 = 0x00000080, // Corresponds to `BUTTON_0x00001000` from `CtrHidDevice::ButtonEnum`
        BUTTON_0x00000100 = 0x00000100,
        BUTTON_0x00000200 = 0x00000200,
        BUTTON_0x00000400 = 0x00000400,
        BUTTON_START = 0x00000800,
        BUTTON_SELECT = 0x00001000,
        BUTTON_L = 0x00002000,
        BUTTON_R = 0x00004000,
        BUTTON_0x00008000 = 0x00008000,
        BUTTON_DPAD_UP = 0x00010000,
        BUTTON_DPAD_DOWN = 0x00020000,
        BUTTON_DPAD_LEFT = 0x00040000,
        BUTTON_DPAD_RIGHT = 0x00080000,
        BUTTON_CPAD_UP = 0x00100000,
        BUTTON_CPAD_DOWN = 0x00200000,
        BUTTON_CPAD_LEFT = 0x00400000,
        BUTTON_CPAD_RIGHT = 0x00800000,
        BUTTON_0x01000000 = 0x01000000,
        BUTTON_0x02000000 = 0x02000000,
        BUTTON_0x04000000 = 0x04000000,
        BUTTON_0x08000000 = 0x08000000,
        BUTTON_0x10000000 = 0x10000000,
        BUTTON_0x20000000 = 0x20000000,
        BUTTON_0x40000000 = 0x40000000,
        BUTTON_0x80000000 = 0x80000000
    };

    explicit CtrController(ControllerMgr* mgr);
    virtual ~CtrController();
    void setStickClampMode(nn::hid::CTR::PadReader::StickClampMode);

protected:
    void calcImpl_();
};

}  // namespace sead
