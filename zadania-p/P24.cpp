#include <iostream>
using namespace std;

int main() {
    int liczba, odwrocona, backup, i;

    cout << "Podaj liczbe nauczyciela" << endl;
    cin >> liczba;

    i = 0;

    do
    {
        backup = liczba;
        odwrocona = 0;
        while (backup > 0)
        {
            odwrocona = odwrocona*10 + backup%10;
            backup/=10;
        }
        if (liczba != odwrocona)
        {
            liczba = odwrocona+liczba;
            i++;
        }
        
        
    } while (liczba != odwrocona);
    

    cout << "Odwrocona: " << odwrocona << endl;
    cout << "Powtorzenia: " << i << endl;

    return 0;
}