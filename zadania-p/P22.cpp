#include <iostream>
using namespace std;

int main() {
    int lewy, prawy;

    do
    {
        cout << "Podaj wartosc lewego konca zakresu liczb" << endl;
        cin >> lewy;

        cout << "Podaj wartosc prawego konca zakresu liczb" << endl;
        cin >> prawy;
    } while (lewy > prawy);

    cout << "Liczby pierwsze z zakresu " << lewy << '-' << prawy << ": ";

    bool isPrime;

    for (int i = lewy; i <= prawy; i++)
    {
        isPrime = true;
        for (int j = 2; j*j <= i; j++)
        {
            if (i%j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            cout << i << ' ';
    }
    
    
    return 0;
}