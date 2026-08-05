#ifndef KHMELONMIX_PLUGINMANAGER_H
#define KHMELONMIX_PLUGINMANAGER_H

// Porting bertahap dari Plugin (KHMelonMix PC/Qt) ke melonDS-android.
// Dipanggil sekali per frame dari MelonInstance.cpp, setelah nds->RunFrame().
namespace KHPlugin {
    enum class GameType {
        Unknown,
        KH358Days
        // KHReCoded: tambahkan di sini nanti setelah Game Code-nya didapat
    };

    // gameCode: pointer ke 4 karakter Game Code dari header ROM (boleh nullptr kalau tidak ada cart).
    void refreshGameScene(const char* gameCode);
    void buildShapes();
    GameType getDetectedGame();
}

#endif //KHMELONMIX_PLUGINMANAGER_H
