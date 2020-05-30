
#ifndef FISH_H
#define FISH_H

#include <iostream>
#include <fstream>
#include "animal.h"

enum location {
    RIVER, SEA, OCEAN, LAKE, OTHER
};

class fish : public animal {
public:
    location living_place; // Локация
    int age; // Возраст
    bool read(std::ifstream& ifs);
    void out(std::ofstream& ofs);
    void multiMethod(animal *other, std::ofstream &ofst);
    void multiBird(std::ofstream &ofst);
    void multiFish(std::ofstream &ofst);
    void multiCommon(std::ofstream &ofst);
};

#endif //FISH_H
