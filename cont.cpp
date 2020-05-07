
#include "cont.h"

void cont::Read(std::ifstream &ifs) {
    while(!ifs.eof()) { // Пока есть что считывать
        animal *A = animal::ReadA(ifs); // Функция возвращает считанные данные
        if(A==NULL) return;
        node *N = new node;
        N->data = A;
        Add(N); // Сохраняем в контейнер
    }
}

void cont::Add(node *A) {
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
    node *A = first;
    for(int i = 0; i < size; i++) {
        node *deleting = A;
        A = A->next;
        delete deleting->data;
        delete deleting;
    }
    size = 0;
}

void cont::Out(std::ofstream &ofs) {
    node *A = first;
    for(int i = 1; i <= size; i++) {
        ofs << i << ". ";
        A->data->OutA(ofs);
        A = A->next;
    }
}

void cont::Specific_Out(std::ofstream &ofs, enum_animal type) {
    node *A = first;
    int index = 1;
    ofs << "Ignoring type: " << type << std::endl;
    for (int i = 1; i <= size; i++) {
        if (A->data->TYPE == type) {
            A = A->next;
            continue;
        }
        ofs << index << ". ";
        A->data->OutA(ofs);
        A = A->next;
        index++;
    }
}

void cont::Sort() {
    node *A = first;
    for(int i = 0; i < size-1; i++) {
        node *B = A->next;
        for(int j = 0; j < size-1-i; j++) {
            if(animal::Comparator(A->data, B->data)) {
                animal*data = A->data;
                A->data = B->data;
                B->data = data;
            }
            B = B->next;
        }
        A = A->next;
    }
}
