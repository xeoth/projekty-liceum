#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num < 2)
        return false;
    for (int i = 2; i < num; i++) {
        if (num%i == 0)
            return false;
    }
    return true;
}

int main() {
    int elementsInArray;
    cout << "Podaj ile elementow chcesz wprowadzic: ";
    cin >> elementsInArray;

    int array[elementsInArray];
    int currentElement;
    for (int i = 0; i < elementsInArray; i++) {
        cout << "Podaj liczbe: ";
        cin >> currentElement;
        array[i] = currentElement;
    }

    cout << "Elementy z indexem, ktory jest liczba pierwsza:" << endl;

    for (int j = 0; j < elementsInArray; j++) {
        if (isPrime(j))
            cout << array[j] << ' ';
    }

    return 0;
}