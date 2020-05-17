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
    Zoo.read(ifst);
    // Вывод
    Zoo.out(ofst);
    Zoo.specificOut(ofst, enumAnimal::FISH);
    Zoo.specificOut(ofst, enumAnimal::BIRD);
    Zoo.sort();
    ofst << "Sorted\n";
    Zoo.out(ofst);
    // Очистка контейнера
    return 0;
}