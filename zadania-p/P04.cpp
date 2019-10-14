#include <iostream>
using namespace std;

int main() {
    cout << "Podaj liczby (program zakonczy sie po podaniu zera)" << endl << endl;

    //Deklaracja zmiennych
    int suma = 0, liczba;
    while (liczba != 0) {
        cout << "Podaj liczbe: ";
        cin >> liczba;
        suma = suma + liczba;
    }

    cout << "Suma wprowadzonych liczb: " << suma << endl;
    return 0;
}