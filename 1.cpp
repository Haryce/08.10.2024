#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    char symbol;
    int dd; //длина линии
    int qdd; //выбор горизантальной линии или вертикальной
    cout << "Введите символ для линии: \n";
    cin >> symbol;
    cout << "Введите длину линии: \n";
    cin >> dd;
    cout << "Введите 1 для вывода горизонтальной линии или 2 для вертикальной: \n";
    cin >> qdd;
    if (qdd == 1) {
        // Горизонтальная линия
        int i = 0;
        while (i < dd) {
            cout << symbol;
            i++;
        }
    }
    else if (qdd == 2) {
        // Вертикальная линия
        int i = 0;
        while (i < dd) {
            cout << symbol << endl;
            i++;
        }
    }
    else {
        cout << "Попробуйте ещё раз";
    }
    return 0;
}

