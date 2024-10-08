#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int dd;
    cout << "Введите длину линии: ";
    cin >> dd;
    int i = 0;
    while (i < dd) {
        cout << "*";
        i++;
    }
    cout;

    return 0;
}
