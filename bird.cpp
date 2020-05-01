
#include "bird.h"

void bird::Read(std::ifstream &ifs) {
    std::string _s;
    ifs >> _s;
    if(_s == "true") is_migratory = 1;
    else is_migratory = 0;
}

void bird::Out(std::ofstream &stream) {
    stream << "Is migratory: " << (is_migratory ? "true" : "false") << std::endl;
}