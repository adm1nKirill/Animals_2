
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
    animal *next; // Последующий элемент
    animal *prev; // Предыдущий  элемент
    enum_animal TYPE; // Тип животного
    std::string name; // Имя животного
    location living_place; // Локация

    void Read(std::ifstream& ifs);
    void Out(std::ofstream& ofs);
};

#endif //FISH_H
