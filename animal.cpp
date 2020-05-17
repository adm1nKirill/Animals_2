
#include "animal.h"
#include "fish.h"
#include "bird.h"
#include "commonAnimal.h"


animal *animal::readA(std::ifstream &ifs) {
    int type, _age;
    ifs >> type;
    if(type < 0 || type > 2) {
        return NULL;
    }
    animal* Read = NULL;
    std::string _name;
    Read = NULL;
    switch (type) {
        case enumAnimal::FISH:
            Read = (animal*)new fish;
            break;
        case enumAnimal::BIRD:
            Read = (animal*)new bird;
            break;
        case enumAnimal::COMMON_ANIMAL:
            Read = (animal*)new commonAnimal;
            break;
    }
    // Считываем возраст
    if(!ifs.eof())
        ifs >> _age;
    else return NULL;
    if(_age < 0) return false;
    if(ifs.fail()) return false;
    // Считываем имя
    if(!ifs.eof())
        ifs >> _name;
    else return NULL;
    Read->age = _age;
    Read->name = _name;
    Read->read(ifs);
    Read->TYPE = (enumAnimal)type;
    return Read;
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
