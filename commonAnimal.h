
#ifndef COMMON_ANIMAL_H
#define COMMON_ANIMAL_H

#include <iostream>
#include <fstream>
#include "animal.h"

enum type {
    PREDATOR, HERBIVOROUS, INSECTIVOROUS
};

class commonAnimal : public animal {
public:
    type food;
    int age; // Возраст
    bool read(std::ifstream& ifs);
    void out(std::ofstream& ofs);
};

#endif //COMMON_ANIMAL_H
