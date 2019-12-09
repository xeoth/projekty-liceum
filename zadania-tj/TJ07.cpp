#include <iostream>
using namespace std;

int main() {
    int elementsInArray;
    cout << "Podaj ile liczb chcesz wprowadzic do tablicy: ";
    cin >> elementsInArray;
    cout << endl;

    int array[elementsInArray];

    // Zapisywanie danych w tabeli
    for (int i = 0; i < elementsInArray; i++)
    {
        cout << "Podaj liczbe nr. " << i+1 << ": ";
        cin >> array[i];
    }

    // Znajdowanie maksymalnej wartości w tabeli
    int max = 0;
    for (int j = 0; j < elementsInArray; j++)
    {
        if (array[j] > max)
            max = array[j];
    }

    // Sprawdzanie ile razy max. wartość znajduje się w tabeli
    int howManyMaxValues = 0;
    for (int k = 0; k < elementsInArray; k++)
    {
        if (array[k] == max)
            howManyMaxValues++;
    }
    

    cout << endl << "Najwieksza liczba przechowywana: " << max << endl << "Wystepuje w tabeli " << howManyMaxValues << " razy.";

    return 0;
}