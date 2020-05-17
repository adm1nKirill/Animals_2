
#include "bird.h"

bool bird::read(std::ifstream &ifs) {
    std::string _s;
    if(!ifs.eof()) return false;
    ifs >> _s;
    if(_s == "true") is_migratory = 1;
    else is_migratory = 0;
    return true;
}

void bird::out(std::ofstream &stream) {
    stream << "Is migratory: " << (is_migratory ? "true" : "false") << std::endl;
}