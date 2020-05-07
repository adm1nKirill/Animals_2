
#ifndef BIRD_H
#define BIRD_H

#include <iostream>
#include <fstream>
#include "animal.h"

class bird : public animal {
public:
    bool is_migratory; // Перелетная ли птица

    int age; // Возраст
    void Read(std::ifstream& ifs);
    void Out(std::ofstream& ofs);
};


#endif //BIRD_H
