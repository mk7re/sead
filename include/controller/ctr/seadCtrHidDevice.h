#pragma once

#include "controller/seadController.h"

namespace sead
{

class CtrHidDevice
{
    public:
        // https://gist.github.com/Nanquitas/d6c920a59c757cf7917c2bffa76de860
        enum class ButtonEnum {
            BUTTON_A = 0x00000001,
            BUTTON_B = 0x00000002,
            BUTTON_SELECT = 0x00000004,
            BUTTON_START = 0x00000008,
            BUTTON_DPAD_RIGHT = 0x00000010,
            BUTTON_DPAD_LEFT = 0x00000020,
            BUTTON_DPAD_UP = 0x00000040,
            BUTTON_DPAD_DOWN = 0x00000080,
            BUTTON_R = 0x00000100,
            BUTTON_L = 0x00000200,
            BUTTON_X = 0x00000400,
            BUTTON_Y = 0x00000800,
            BUTTON_0x00001000 = 0x00001000,
            BUTTON_0x00002000 = 0x00002000,
            BUTTON_ZL = 0x00004000,
            BUTTON_ZR = 0x00008000,
            BUTTON_0x00010000 = 0x00010000,
            BUTTON_0x00020000 = 0x00020000,
            BUTTON_0x00040000 = 0x00040000,
            BUTTON_0x00080000 = 0x00080000,
            BUTTON_TOUCH = 0x00100000,
            BUTTON_0x00200000 = 0x00200000,
            BUTTON_0x00400000 = 0x00400000,
            BUTTON_0x00800000 = 0x00800000,
            BUTTON_CSTICK_RIGHT = 0x01000000,
            BUTTON_CSTICK_LEFT = 0x02000000,
            BUTTON_CSTICK_UP = 0x04000000,
            BUTTON_CSTICK_DOWN = 0x08000000,
            BUTTON_CPAD_RIGHT = 0x10000000,
            BUTTON_CPAD_LEFT = 0x20000000,
            BUTTON_CPAD_UP = 0x40000000,
            BUTTON_CPAD_DOWN = 0x80000000
        };

    private:
        u8 field_0x00[0x1638];
};

}  // namespace sead
