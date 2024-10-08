#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int dd;
    char symbol;
    cout << "Введите длину линии: ";
    cin >> dd;
    cout << "Введите символ для заполнения: ";
    cin >> symbol;
    int i = 0;
    while (i < dd) {
        cout << symbol;
        i++;
    }

    cout << endl;

    return 0;
}
