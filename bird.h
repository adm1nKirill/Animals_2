
#ifndef BIRD_H
#define BIRD_H

#include <iostream>
#include <fstream>
#include "animal.h"

class bird : public animal {
public:
    animal *next; // Последующий элемент
    animal *prev; // Предыдущий  элемент
    enum_animal TYPE; // Тип животного
    std::string name; // Имя животного
    bool is_migratory; // Перелетная ли птица

    void Read(std::ifstream& ifs);
    void Out(std::ofstream& ofs);
};


#endif //BIRD_H
