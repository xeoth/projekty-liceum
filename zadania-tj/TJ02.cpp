#include <iostream>
using namespace std;

int main() {
    int array[10];
    int value;
    for (int i = 0; i < 10; i++) {
        cout << "Podaj wartosc: ";
        cin >> value;
        array[i] = value;
    }

    cout << "Wprowadzone wartosci w kolejnosci odwrotnej od wprowadzenia:" << endl;

    for (int j = 9; j >= 0; j--) {
        cout << array[j] << ' ';
    }
    return 0;
}