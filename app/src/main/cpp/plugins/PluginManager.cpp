#include "PluginManager.h"
#include <android/log.h>
#include <cstring>

namespace KHPlugin {
    static unsigned long frameCounter = 0;
    static GameType detectedGame = GameType::Unknown;

    GameType getDetectedGame() {
        return detectedGame;
    }

    void refreshGameScene(const char* gameCode) {
        frameCounter++;

        if (detectedGame == GameType::Unknown && gameCode != nullptr) {
            if (std::strncmp(gameCode, "YKGE", 4) == 0) {
                detectedGame = GameType::KH358Days;
                __android_log_print(ANDROID_LOG_INFO, "KHMelonMixPlugin",
                    "Game terdeteksi: Kingdom Hearts 358/2 Days (code: %.4s)", gameCode);
            }
        }

        if (frameCounter % 60 == 0) {
            __android_log_print(ANDROID_LOG_INFO, "KHMelonMixPlugin",
                "Hook aktif - frame ke-%lu, game terdeteksi (0=belum/lain, 1=Days): %d",
                frameCounter, static_cast<int>(detectedGame));
        }
    }

    void buildShapes() {
        // Placeholder untuk logic shape 2D/3D (dipakai nanti di fase Cutscene).
    }
}
