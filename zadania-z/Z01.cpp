#include <iostream>
using namespace std;

int main() {

    //Deklaracja zmiennych
    int wys, szer;

    //Pytanie użytkownika o wymiary prostokąta
    cout << "Podaj wysokosc prostokata" << endl;
    cin >> wys;
    cout << "Podaj szerokosc prostokata" << endl;
    cin >> szer;

    //Obliczanie pola i obwodu
    int area, obw;
    area = wys*szer;
    obw = 2*wys+2*szer;

    //Wyświetlenie pola oraz obwodu
    cout << "Pole tego prostokata to " << area << endl;
    cout << "Obwod tego prostokata to " << obw << endl;
    return 0;
}