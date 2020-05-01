
#ifndef CONT_H
#define CONT_H

#include <iostream>
#include <fstream>
#include "animal.h"

class cont {
public:
    animal* first; // Указатель на первый элемент
    int size; // Размер контейнера

    // Деструктор
    ~cont();
    // Конструктор
    cont();
    void Add(animal*A);
    void Read(std::ifstream& ifs);
    void Out(std::ofstream& ofs);

};
#endif //CONT_H
