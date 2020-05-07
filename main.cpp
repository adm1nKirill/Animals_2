#include "cont.h"

using namespace std;

int main(int argc, char* argv[]) {
    if(argc < 3) { // Проверка на корректность аргументов программы
        cout << "incorrect command line! " << endl;
        return 1;
    }
    ifstream ifst(argv[1]);
    // Контейнер с животными
    cont Zoo{};
    // Считывание
    Zoo.Read(ifst);
    ofstream ofst(argv[2]);
    // Вывод
    Zoo.Out(ofst);
    Zoo.Specific_Out(ofst, enum_animal::FISH);
    Zoo.Specific_Out(ofst, enum_animal::BIRD);
    // Очистка контейнера
    return 0;
}