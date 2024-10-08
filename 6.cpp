#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int i = 1;
    int summ = 0;
    while (i <= 5) {
        summ += i;
        i++;
    }
    cout << "Сумма чисел от 1 до 5: " << summ;
    return 0;
}
