#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int i = 0;
    while (i < 5) {
        cout << '*';
        i++;
    }
    cout;
    return 0;
}
