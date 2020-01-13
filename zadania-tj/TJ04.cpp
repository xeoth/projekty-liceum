#include <iostream>
using namespace std;

int main() {
    int elementsInArray;
    cout << "Podaj ile elementow chcesz wprowadzic: ";
    cin >> elementsInArray;

    int array[elementsInArray];

    for (int i = 0; i < elementsInArray; i++) {
        cout << "Podaj liczbe: ";
        cin >> array[i];
    }

    cout << "Elementy tabeli podzielne przez 3:" << endl;

    for (int j = 0; j < elementsInArray; j++) {
        if (array[j]%3 == 0)
            cout << array[j] << ' ';
    }

    return 0;
}