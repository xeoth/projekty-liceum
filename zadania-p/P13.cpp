#include <iostream>
using namespace std;

int main() {
    //Deklaracja zmiennych
    unsigned long long poczatek, krok, elementy, aktualny = 0;

    cout << "Podaj poczatek ciagu" << endl;
    cin >> poczatek;
    cout << "Podaj krok ciagu" << endl;
    cin >> krok;
    cout << "Podaj liczbe elementow ktore mam wyswietlic" << endl;
    cin >> elementy;

    if (poczatek > 18446744073709551615 || krok > 18446744073709551615 || elementy > 18446744073709551615) {
        cout << "Co najmniej jedna z podanych wartosci jest wieksza niz dopuszczalna wartosc." << endl;
        return 0;
    }

    for (int i = 1; i < elementy; i++)
    {
        poczatek += krok;
        if (poczatek > 18446744073709551615) {
            cout << "Nie mozna wyswietlic kolejnego elementu poniewaz jest zbyt duzy." << endl;
            break;
        }
        cout << poczatek << ' ';
    }
    
    return 0;
}