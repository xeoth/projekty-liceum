#include <iostream>
using namespace std;

int main() {
    int elementsInArray;
    cout << "Podaj liczbe elementow, ktore chcesz wprowadzic: ";
    cin >> elementsInArray;

    int array[elementsInArray];

    int currentElement;
    for (int i = 0; i < elementsInArray; i++) {
        cout << "Podaj liczbe: ";
        cin >> currentElement;
        array[i] = currentElement;
    }

    int biggestElement = 0;
    for (int j = 0; j < elementsInArray; j++) {
        if (biggestElement < array[j])
            biggestElement = array[j];
    }

    cout << "Najwieksza podana liczba: " << biggestElement;
    return 0;
}