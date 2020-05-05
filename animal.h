
#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <fstream>
#include "string"

// Перечисляемый тип - тип животного
enum enum_animal {
    FISH,
    BIRD,
};

// Животные
class animal {
public:
    enum_animal TYPE; // Тип животного
    std::string name; // Имя животного
    static animal* ReadA(std::ifstream&ifs);
    void OutA(std::ofstream& ofs);
    static bool Comparator(animal*f, animal*s);
    int nameLength();
    virtual void Read(std::ifstream& ifs) = 0;
    virtual void Out(std::ofstream& ofs) = 0;
};


#endif //ANIMAL_H
