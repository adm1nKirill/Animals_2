
#include "animal.h"
#include "fish.h"
#include "bird.h"
#include "commonAnimal.h"


animal *animal::readA(std::ifstream &ifs) {
    int type, age;
    ifs >> type;
    if(type < 0 || type > 2) {
        return NULL;
    }
    animal* read = NULL;
    std::string name;
    Read = NULL;
    switch (type) {
        case enumAnimal::FISH:
            read = (animal*)new fish;
            break;
        case enumAnimal::BIRD:
            read = (animal*)new bird;
            break;
        case enumAnimal::COMMON_ANIMAL:
            read = (animal*)new commonAnimal;
            break;
    }
    // Считываем возраст
    if(!ifs.eof())
        ifs >> age;
    else return NULL;
    if(age < 0) return NULL;
    if(ifs.fail()) return NULL;
    // Считываем имя
    if(!ifs.eof())
        ifs >> name;
    else return NULL;
    read->age = age;
    read->name = name;
    read->read(ifs);
    read->TYPE = (enumAnimal)type;
    return read;
}

void animal::outA(std::ofstream &ofs) {
    ofs << "NAME: " << name << std::endl;
    ofs << "AGE: " << age << std::endl;
    ofs << "NAME LENGTH: " << nameLength() << std::endl;
    ofs << "ANIMAL: ";
    switch(TYPE) {
        case enumAnimal::FISH:
            ofs << "FISH\n";
            break;
        case enumAnimal::BIRD:
            ofs << "BIRD\n";
            break;
        case enumAnimal::COMMON_ANIMAL:
            ofs << "COMMON ANIMAL\n";
            break;
    }
    out(ofs);
}

int animal::nameLength() {
    return name.length();
}

bool animal::comparator(animal *f, animal *s) {
    return f->nameLength() < s->nameLength();
}
