#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int box; //переменная для ящиков
    cout << "Введите количество ящиков: ";
    cin >> box;
    int car = 0;
    //цикл для определения сколько машин подъехало за ящиками
    while (box > 0) {
        int dd;
        cout << "Введите количество ящиков, которое забрала машина: ";
        cin >> dd;
        box -= dd;
        car++;
    }
    cout << "К складу подъехало " << car << " машин.";

    return 0;
}
