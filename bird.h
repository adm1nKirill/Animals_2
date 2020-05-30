
#ifndef BIRD_H
#define BIRD_H

#include <iostream>
#include <fstream>
#include "animal.h"

class bird : public animal {
public:
    bool is_migratory; // Перелетная ли птица

    int age; // Возраст
    bool read(std::ifstream& ifs);
    void out(std::ofstream& ofs);
    void multiMethod(animal *other, std::ofstream &ofst);
    void multiBird(std::ofstream &ofst);
    void multiFish(std::ofstream &ofst);
    void multiCommon(std::ofstream &ofst);
};


#endif //BIRD_H
