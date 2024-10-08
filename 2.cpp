#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int start, end; //начало и конец диапазона
    cout << "Введите начало диапазона: ";
    cin >> start;
    cout << "Введите конец диапазона: ";
    cin >> end;
    int sum = 0;
    int i = start;
    //цикл для счета нечетных чисел в диапазоне
    while (i <= end) {
        if (i % 2 != 0) {
            sum += i;
        }
        i++;
    }
    cout << "Сумма всех нечетных чисел в диапазоне: " << sum;
    return 0;
}


