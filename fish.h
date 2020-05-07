
#ifndef FISH_H
#define FISH_H

#include <iostream>
#include <fstream>
#include "animal.h"

enum location {
    river, sea, ocean, lake, other
};

class fish : public animal {
public:
    location living_place; // Локация
    int age; // Возраст
    void Read(std::ifstream& ifs);
    void Out(std::ofstream& ofs);
};

#endif //FISH_H
