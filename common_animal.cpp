
#include "common_animal.h"

bool common_animal::Read(std::ifstream &ifs) {
    int int_location;
    if(!ifs.eof()) return false;
    ifs >> int_location;
    if(ifs.fail()) return false;
    food = (type)int_location;
    return true;
}

void common_animal::Out(std::ofstream &stream) {
    stream << "Type: ";
    switch (food) {
        case type::predator:
            stream << "Predator\n";
            return;
        case type::herbivorous:
            stream << "Herbivorous\n";
            return;
        case type::insectivorous:
            stream << "Insectivorous\n";
            return;
        default:
            stream << "Other\n";
            return;
    }
}