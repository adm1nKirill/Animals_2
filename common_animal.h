
#ifndef COMMON_ANIMAL_H
#define COMMON_ANIMAL_H

#include <iostream>
#include <fstream>
#include "animal.h"

enum type {
    predator, herbivorous, insectivorous
};

class common_animal : public animal {
public:
    type food;

    void Read(std::ifstream& ifs);
    void Out(std::ofstream& ofs);
};

#endif //COMMON_ANIMAL_H
