#include <iostream>
using namespace std;

int main() {
    //Deklaracja zmiennych
    int l1, l2, nwd;

    //Przyjmowanie wartości
    cout << "Podaj pierwsza liczbe" << endl;
    cin >> l1;
    cout << "Podaj druga liczbe" << endl;
    cin >> l2;

    //Szukanie NWD
    while(l1 != l2) {
        if (l1 < l2)
            l2-=l1;
        else
            l1-=l2;

        nwd=l1;
    }

    cout << "NWD: " << nwd << endl;

    return 0;
}