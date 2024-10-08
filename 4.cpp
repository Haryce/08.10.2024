#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int L, P, dd = 0;
    cout << "Введите длину ткани (L): ";
    cin >> L;
    cout << "Введите длину подушки (P): ";
    cin >> P;
    do {
        if (L >= P) {
            L -= P;
            dd++;
        }
        else {
            break;
        }
    } while (true);
    cout << "Швея сможет пошить " << dd << " подушек";
    return 0;
}

