#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int num1, num2, sum = 0, count = 0;
    cout << "Введите первое число: ";
    cin >> num1;
    cout << "Введите второе число: ";
    cin >> num2;
    // Проверяем, какое число больше
    if (num1 > num2) {
        swap(num1, num2);
    }
    int i = num1;
    while (i <= num2) {
        sum += i;
        count++;
        i++;
    }
    // Вычисляем среднее арифметическое
    double average = static_cast<double>(sum) / count;

    cout << "Сумма чисел в диапазоне: " << sum << endl;
    cout << "Среднее арифметическое: " << average << endl;

    return 0;
}
