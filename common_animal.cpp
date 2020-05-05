
#include "common_animal.h"

void common_animal::Read(std::ifstream &ifs) {
    int int_location;
    ifs >> int_location;
    food = (type)int_location;
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