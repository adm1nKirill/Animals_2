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
    cont zoo{};
    // Считывание
    zoo.read(ifst);
    // Вывод
    zoo.out(ofst);
    zoo.multi(ofst);
    // Очистка контейнера
    return 0;
}
