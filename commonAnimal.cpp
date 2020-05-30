
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

void commonAnimal::multiMethod(animal *other, std::ofstream &ofst) {
    other->multiCommon(ofst);
}

void commonAnimal::multiBird(std::ofstream &ofst) {
    ofst << "Common_animal and bird" << std::endl;
}

void commonAnimal::multiFish(std::ofstream &ofst) {
    ofst << "Common_animal and fish" << std::endl;
}

void commonAnimal::multiCommon(std::ofstream &ofst) {
    ofst << "Common_animal and common_animal" << std::endl;
}
