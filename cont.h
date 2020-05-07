
#ifndef CONT_H
#define CONT_H

#include <iostream>
#include <fstream>
#include "animal.h"

class node {
public:
    animal*data;
    node*next;
    node*prev;
};

class cont {
public:
    node* first; // Указатель на первый элемент
    int size; // Размер контейнера

    // Деструктор
    ~cont();
    // Конструктор
    cont();
    void Add(node*A);
    void Read(std::ifstream& ifs);
    void Out(std::ofstream& ofs);
    void Specific_Out(std::ofstream& ofs, enum_animal type);
    void Sort();

};
#endif //CONT_H
