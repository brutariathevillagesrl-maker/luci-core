#ifndef LUCI_MINING_H
#define LUCI_MINING_H

#include "config.h"

// Setări de dificultate și recompense
#define BLOCK_REWARD 50 // Recompensa: 50 LUCI pe bloc
#define TARGET_BLOCK_TIME 60 // 60 secunde per bloc

// Configurație Algoritm KawPow
struct KawPowConfig {
    const char* algo = ALGO_GPU;
    int dag_size_gb = 4; // Necesar minim 4GB VRAM
};

#endif
