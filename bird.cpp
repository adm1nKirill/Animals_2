
#include "bird.h"

bool bird::Read(std::ifstream &ifs) {
    std::string _s;
    if(!ifs.eof()) return false;
    ifs >> _s;
    if(_s == "true") is_migratory = 1;
    else is_migratory = 0;
    return true;
}

void bird::Out(std::ofstream &stream) {
    stream << "Is migratory: " << (is_migratory ? "true" : "false") << std::endl;
}