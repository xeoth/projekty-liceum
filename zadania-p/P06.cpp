#include <iostream>
using namespace std;

int main() {
    //deklaracja zm.
    int liczba;

    //pytanie użytkownika o liczbę
    cout << "Podaj liczbe calkowita:" << endl;
    cin >> liczba;

    //wypisywanie dzielników
    cout << "Dzielniki liczby " << liczba << ":" << endl;
    for (int i = 1; i <= liczba; i++) {
        if (liczba % i == 0) {
            cout << i << " ";
        }
    }
    

    return 0;
}