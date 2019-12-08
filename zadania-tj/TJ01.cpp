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

    cout << "Wprowadzone wartosci:" << endl;

    for (int j = 0; j < 10; j++) {
        cout << array[j] << ' ';
    }
    return 0;
}