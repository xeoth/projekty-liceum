#include <iostream>
using namespace std;

int main() {
    //Pytamy użytkownika o liczby
    float l1, l2;
    cout << "Podaj liczbe" << endl;
    cin >> l1;
    cout << "Podaj wartosc procentu" << endl;
    cin >> l2;

    //Liczymy procenty
    float procent;
    procent = (l1*l2)/100;

    //Zwracamy liczbę procentów
    cout << l2 << "% z liczby " << l1 << " wynosi " << procent << endl;
    return 0;
}