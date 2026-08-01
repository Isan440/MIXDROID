#ifndef KHMELONMIX_PLUGINMANAGER_H
#define KHMELONMIX_PLUGINMANAGER_H

// Kerangka awal porting Plugin dari KHMelonMix (PC/Qt) ke melonDS-android.
// Dipanggil sekali per frame dari MelonInstance.cpp, tepat setelah nds->RunFrame().
// Logic Plugin asli (refreshGameScene/buildShapes dari Plugin.cpp KHMelonMix)
// akan diisi bertahap di sini pada langkah-langkah berikutnya.
namespace KHPlugin {
    void refreshGameScene();
    void buildShapes();
}

#endif //KHMELONMIX_PLUGINMANAGER_H
