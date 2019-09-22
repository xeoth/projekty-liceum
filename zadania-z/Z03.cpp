#include <iostream>
using namespace std;

int main() {
    //Pytamy użytkownika o dzielnik i dzielną
    int dzielna, dzielnik;
    cout << "Podaj dzielna" << endl;
    cin >> dzielna;
    cout << "Podaj dzielnik" << endl;
    cin >> dzielnik;

    //Obliczamy iloraz oraz resztę
    int iloraz, reszta;
    iloraz = dzielna/dzielnik;
    reszta = dzielna%dzielnik;
    cout << "Iloraz liczb " << dzielna << " oraz " << dzielnik << " to " << iloraz << ", a reszta z dzielenia to " << reszta << endl;
    return 0;
}