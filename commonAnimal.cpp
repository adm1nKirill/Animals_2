
#include "commonAnimal.h"

bool commonAnimal::read(std::ifstream &ifs) {
    int int_location;
    if(!ifs.eof()) return false;
    ifs >> int_location;
    if(ifs.fail()) return false;
    food = (type)int_location;
    return true;
}

void commonAnimal::out(std::ofstream &stream) {
    stream << "Type: ";
    switch (food) {
        case type::PREDATOR:
            stream << "Predator\n";
            return;
        case type::HERBIVOROUS:
            stream << "Herbivorous\n";
            return;
        case type::INSECTIVOROUS:
            stream << "Insectivorous\n";
            return;
        default:
            stream << "Other\n";
            return;
    }
}