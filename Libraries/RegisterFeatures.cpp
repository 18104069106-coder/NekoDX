#include "RegisterFeatures.h"
#include <stdint.h>

extern "C" void UnityEnableGyroscope(bool value);
extern "C" void UnityEnableStylusTouch(bool value);

// CRI VP9 codec stubs for iOS
extern "C" {
    void* criVvp9_GetInterface() { return nullptr; }
    void* criVvp9_GetAlphaInterface() { return nullptr; }
    void criVvp9_SetUserAllocator(void* a, void* b, void* c) {}

    // CRIWARE Windows obfuscated entry points resolver for iOS
    static int32_t s_cri_true() { return 1; }
    static int32_t s_cri_zero() { return 0; }

    void* NekoDX_ResolveCriwareStub(const char* name)
    {
        if (name == nullptr) return nullptr;
        if (strcmp(name, "CRIWARE3F266E57") == 0) {
            // IsLibraryInitialized -> true
            return (void*)s_cri_true;
        }
        // Return dummy zero/void stub for all other obfuscated Windows CRIWARE entry points
        return (void*)s_cri_zero;
    }
}

void RegisterFeatures()
{
    UnityEnableGyroscope(false);
    UnityEnableStylusTouch(true);
}
