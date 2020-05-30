
#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <fstream>
#include "string"

// Перечисляемый тип - тип животного
enum enumAnimal {
    FISH,
    BIRD,
    COMMON_ANIMAL
};

// Животные
class animal {
public:
    enumAnimal TYPE; // Тип животного
    std::string name; // Имя животного
    int age; // Возраст
    static animal* readA(std::ifstream&ifs);
    void outA(std::ofstream& ofs);
    static bool comparator(animal*f, animal*s);
    int nameLength();
    virtual bool read(std::ifstream& ifs) = 0;
    virtual void out(std::ofstream& ofs) = 0;
    virtual void multiMethod(animal *other, std::ofstream &ofst) = 0;
    virtual void multiBird(std::ofstream &ofst) = 0;
    virtual void multiFish(std::ofstream &ofst) = 0;
    virtual void multiCommon(std::ofstream &ofst) = 0;
};


#endif //ANIMAL_H
