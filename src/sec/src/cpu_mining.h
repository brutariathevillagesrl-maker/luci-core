#ifndef LUCI_CPU_MINING_H
#define LUCI_CPU_MINING_H

#include "config.h"

// Configurație Algoritm GhostRider (pentru procesoare)
struct GhostRiderConfig {
    const char* algo = ALGO_CPU;
    bool avx2_enabled = true; // Optimizează pentru procesoare moderne
};

#endif

