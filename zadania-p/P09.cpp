#include <iostream>
using namespace std;

int main() {
    //deklaracja zmiennych
    int ostatnia, liczba;

    //pytanie użytkownika o wartość
    cout << "Podaj liczbe naturalna" << endl;
    cin >> liczba;

    cout << "Liczba odwrotna liczby " << liczba << " to: ";

    //odwracanie kolejnosci cyfr
    while (liczba > 0)
    {
        ostatnia = liczba % 10;
        cout << ostatnia;
        liczba /= 10;
    }
    cout << endl;

    return 0;
}