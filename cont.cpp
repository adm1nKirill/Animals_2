
#include "cont.h"

void cont::Read(std::ifstream &ifs) {
    while(!ifs.eof()) { // Пока есть что считывать
        animal *A = animal::ReadA(ifs); // Функция возвращает считанные данные
        if(A==NULL) return;
        Add(A); // Сохраняем в контейнер
    }
}

void cont::Add(animal *A) {
    size++;
    if(first == nullptr) { // Если контейнер пуст
        first = A;
        A->prev = A->next = A;
    } else {
        // Связываем A с предыдущим
        (first->prev)->next = A;
        A->prev = (first->prev);
        // Связываем A с последующим
        first->prev = A;
        A->next = first;
    }
}

cont::cont() {
    first = NULL;
    size = 0;
}

cont::~cont() {
    animal *A = first;
    for(int i = 0; i < size; i++) {
        animal *deleting = A;
        A = A->next;
        delete deleting;
    }
    size = 0;
}

void cont::Out(std::ofstream &ofs) {
    animal *A = first;
    for(int i = 1; i <= size; i++) {
        ofs << i << ". ";
        A->OutA(ofs);
        A = A->next;
    }
}


void cont::Multi(std::ofstream &ofst) {
    ofst << "_multimethod_" << std::endl;
    node *A = first;
    for(int i = 0; i < size-1; i++) {
        node *B = first->next;
        for(int j = 0; j < size-1-i; j++) {
            A->data->MultiMethod(B->data, ofst);
            A->data->OutA(ofst);
            B->data->OutA(ofst);
        }
    }
}