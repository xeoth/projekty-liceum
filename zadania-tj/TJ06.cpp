#include <iostream>
using namespace std;

int main() {
    int elementsInArray;
    cout << "Podaj, ile liczb chcesz wprowadzic do tablicy" << endl;
    cin >> elementsInArray;

    int array[elementsInArray];

    for (int i = 0; i < elementsInArray; i++)
    {
        cout << "Podaj liczbe nr " << i+1 << endl;
        cin >> array[i];
    }

    cout << "Elementy tablicy podzielne przez 2 i indeks podzielny przez 2" << endl;

    for (int j = 0; j < elementsInArray; j++)
    {
        if (j%2 == 0 && array[j]%2 == 0)
            cout << array[j] << ' ';
    }
    
    
    
    return 0;
}