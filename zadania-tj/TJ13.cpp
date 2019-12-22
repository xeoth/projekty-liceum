// Działa od C++11!
#include <iostream>
#include <random> // Zamiast cstdlib i ctime użyję tu random
using namespace std;

int main() {
    // Seed do generatora

    random_device rd; // random_device podobno zwraca prawdziwie losowe liczby, nie pseudolosowe
    mt19937 eng(rd()); // tu dokładnie wrzucamy seed do generatora
    uniform_int_distribution<> distr(0, 100); // generujemy pseudolosowe liczby zgodnie z seedem
    // Więcej do zapamiętania, ale ciekawie

    // Wypełnianie tabeli oraz jej wyświetlanie
    int array[20];

    for (int i = 0; i < 20; i++)
    {
        array[i] = distr(eng);
        cout << array[i] << ' ';
    }


    // Wykonywanie polecenia

    int biggestSum = 0, x, y;
    for (int j = 0; j < 19; j++)
    {
        // Sumujemy ze sobą liczby array[j] oraz array[j+1], aż dojdziemy do j+1=20
        int localSum = array[j] + array[j+1];
        if (localSum > biggestSum) {
            biggestSum = localSum;
            x = array[j], y = array[j+1];
        }

    }

    // Wyświetlanie wyników
    cout << endl << "Najwieksza suma elementow: " << biggestSum << endl;
    cout << "Jest to suma elementow " << x << " i " << y << endl;


    return 0;
}