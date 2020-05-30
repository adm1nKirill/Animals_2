
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
    void add(node*A);
    void read(std::ifstream& ifs);
    void out(std::ofstream& ofs);
    void specificOut(std::ofstream& ofs, enumAnimal type);
    void sort();
    void multi(std::ofstream &ofst);
};
#endif //CONT_H
