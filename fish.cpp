
#include "fish.h"

bool fish::read(std::ifstream &ifs) {
    int int_location;
    if(!ifs.eof()) return false;
    ifs >> int_location;
    if(!ifs.fail()) return false;
    living_place = (location)int_location;
    return true;
}

void fish::out(std::ofstream &ofs) {
    ofs << "Location: ";
    switch (living_place) {
        case location::LAKE:
            ofs << "Lake\n";
            return;
        case location::OCEAN:
            ofs << "Ocean\n";
            return;
        case location::RIVER:
            ofs << "River\n";
            return;
        case location::SEA:
            ofs << "Sea\n";
            return;
        default:
            ofs << "Other\n";
            return;
    }
}

void fish::multiMethod(animal *other, std::ofstream &ofst) {
    other->multiFish(ofst);
}

void fish::multiBird(std::ofstream &ofst) {
    ofst << "Fish and bird" << std::endl;
}

void fish::multiFish(std::ofstream &ofst) {
    ofst << "Fish and fish" << std::endl;
}

void fish::multiCommon(std::ofstream &ofst) {
    ofst << "Fish and common_animal" << std::endl;
}

