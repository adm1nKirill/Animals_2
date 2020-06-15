
#include "bird.h"

bool bird::read(std::ifstream &ifs) {
    std::string _s;
    if(!ifs.eof()) return false;
    ifs >> _s;
    if(_s == "true") is_migratory = 1;
    else if(_s == "false") is_migratory = 1;
    else return false;
    return true;
}

void bird::out(std::ofstream &stream) {
    stream << "Is migratory: " << (is_migratory ? "true" : "false") << std::endl;
}

void bird::multiMethod(animal *other, std::ofstream &ofst) {
    other->multiBird(ofst);
}

void bird::multiBird(std::ofstream &ofst) {
    ofst << "Bird and bird" << std::endl;
}

void bird::multiFish(std::ofstream &ofst) {
    ofst << "Bird and fish" << std::endl;
}

void bird::multiCommon(std::ofstream &ofst) {
    ofst << "Bird and common_animal" << std::endl;
}
