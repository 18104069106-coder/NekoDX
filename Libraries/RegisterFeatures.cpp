#include "RegisterFeatures.h"
#include <stdint.h>

extern "C" void UnityEnableGyroscope(bool value);
extern "C" void UnityEnableStylusTouch(bool value);

// CRI VP9 codec stubs for iOS
extern "C" {
    void* criVvp9_GetInterface() { return nullptr; }
    void* criVvp9_GetAlphaInterface() { return nullptr; }
    void criVvp9_SetUserAllocator(void* a, void* b, void* c) {}
}

void RegisterFeatures()
{
    UnityEnableGyroscope(false);
    UnityEnableStylusTouch(true);
}
