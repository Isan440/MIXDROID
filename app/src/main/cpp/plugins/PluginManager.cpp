#include "PluginManager.h"
#include <android/log.h>

namespace KHPlugin {
    static unsigned long frameCounter = 0;

    void refreshGameScene() {
        frameCounter++;
        // Log sekali tiap ~60 frame (kira-kira 1x/detik) biar logcat tidak banjir.
        if (frameCounter % 60 == 0) {
            __android_log_print(ANDROID_LOG_INFO, "KHMelonMixPlugin",
                "Hook aktif - refreshGameScene() terpanggil, frame ke-%lu", frameCounter);
        }
    }

    void buildShapes() {
        // Placeholder. Nanti diisi logic shape 2D/3D dari Plugin.cpp asli.
    }
}
