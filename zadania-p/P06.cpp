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
    for (int i = 0; i < liczba; i++) {
        cout << "got here";

        if (liczba % i == 0) {
            cout << i << " ";
        }
    }
    

    return 0;
}