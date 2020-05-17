#include "cont.h"

using namespace std;

int main(int argc, char* argv[]) {
    if(argc < 3) { // Проверка на корректность аргументов программы
        cout << "incorrect command line! " << endl;
        return 1;
    }
    ifstream ifst(argv[1]);
    ofstream ofst(argv[2]);
    // Проверка на отсутствие файла
    if(!ifst.is_open() || !ofst.is_open()) {
        cout << "File can't be opened." << endl;
    }
    // Контейнер с животными
    cont Zoo{};
    // Считывание
    Zoo.Read(ifst);
    // Вывод
    Zoo.Out(ofst);
    Zoo.Specific_Out(ofst, enum_animal::FISH);
    Zoo.Specific_Out(ofst, enum_animal::BIRD);
    Zoo.Sort();
    ofst << "Sorted\n";
    Zoo.Out(ofst);
    // Очистка контейнера
    return 0;
}