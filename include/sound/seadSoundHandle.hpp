#pragma once

#include "basis/seadTypes.h"
#include <nn/snd/snd.h>

namespace sead 
{

struct SoundHandle: public nw::snd::SoundHandle {
    void stop(s32);
    void pause(s32);
    void setPan(f32);
    void unpause(s32);
    void setPitch(f32);
    void setVolume(f32, s32);
    bool isAttachedSound() const;
};

}