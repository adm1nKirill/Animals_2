
#include "animal.h"
#include "fish.h"
#include "bird.h"


animal *animal::ReadA(std::ifstream &ifs) {
    int type;
    ifs >> type;
    if(type < 0 || type > 1) {
        return NULL;
    }
    animal* Read = NULL;
    std::string _name;
    Read = NULL;
    switch (type) {
        case enum_animal::FISH:
            Read = (animal*)new fish;
            break;
        case enum_animal::BIRD:
            Read = (animal*)new bird;
            break;
    }
    // Считываем имя
    if(!ifs.eof())
        ifs >> _name;
    else return NULL;
    Read->name = _name;
    Read->Read(ifs);
    Read->TYPE = (enum_animal)type;
    return Read;
}

void animal::OutA(std::ofstream &ofs) {
    ofs << "NAME: " << name << std::endl;
    ofs << "ANIMAL: ";
    switch(TYPE) {
        case enum_animal::FISH:
            ofs << "FISH\n";
            break;
        case enum_animal::BIRD:
            ofs << "BIRD\n";
            break;
    }
    Out(ofs);
}