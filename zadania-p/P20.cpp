#include <iostream>
using namespace std;

int main() {
    int liczba, i, iloczyn;

    cout << "Podaj liczbe naturalna" << endl;
    cin >> liczba;

    cout << "Z podanej liczby powstaje nastepujacy ciag:" << endl;

    cout << liczba << ' ';
    while (liczba > 9)
    {
        i = liczba;
        iloczyn = 1;

        while (i > 0)
        {
            iloczyn *= i%10;
            i /= 10;
        }
        liczba = iloczyn;
        cout << iloczyn << ' ';
    }
    

    return 0;
}