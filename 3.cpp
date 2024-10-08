#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите натуральное число n: ";
    cin >> n;
    if (n < 0) {
        cout << "Факториал для отрицательных чисел не существует.";
    }
    else {
        int factorial = 1;
        int i = 1;
        while (i <= n) {
            factorial *= i;
            i++;
        }
        cout << "Факториал числа " << n << "\nравен " << factorial;
    }
    return 0;
}


