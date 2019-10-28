#include <iostream>
using namespace std;

int pole(int bok1, int bok2) {
    int returnValue;
    returnValue = bok1*bok2;
    return returnValue;
}

int obwod(int bok1, int bok2) {
    int returnValue;
    returnValue = bok1*2 + bok2*2;
    return returnValue;
}

int main() {
    int bok1, bok2;
    cout << "Podaj dlugosc pierwszego boku" << endl;
    cin >> bok1;
    cout << "Podaj dlugosc drugiego boku" << endl;
    cin >> bok2;

    cout << "Ten prostokat ma pole rowne " << pole(bok1, bok2) << " i obwod rowny " << obwod(bok1, bok2);
    return 0;
}