#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //Pytamy użytkownka o długości przyprostokątnych
    float przypr1, przypr2;
    cout << "Podaj dlugosc pierwszej przyprostokatnej" << endl;
    cin >> przypr1;
    cout << "Podaj dlugosc drugiej przyprostokatnej" << endl;
    cin >> przypr2;

    //Obliczamy pole oraz obwód trójkąta
    float pole, obw, przeciwpr;
    pole = (przypr1 * przypr2)/2;
    przeciwpr = sqrt(pow(przypr1, 2.0) + pow(przypr2, 2.0));
    obw = przeciwpr + przypr1 + przypr2;

    //Wyświetlamy obliczone wartości.
    cout << "Pole tego trójkąta to " << pole << ", a obwod to " << obw << endl;

    return 0;
}