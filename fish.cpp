
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

