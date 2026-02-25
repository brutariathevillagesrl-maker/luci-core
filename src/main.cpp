#include <iostream>
#include "config.h"

int main() {
    std::cout << "Pornire retea " << PROJECT_NAME << " Core..." << std::endl;
    std::cout << "Unitate de masura: " << UNIT_NAME << std::endl;
    std::cout << "Algoritmi activi: " << ALGO_GPU << " si " << ALGO_CPU << std::endl;

    return 0;
}


