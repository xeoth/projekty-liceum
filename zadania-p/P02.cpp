#include <iostream>
using namespace std;

int main() {

    //Pętla for
    cout << "Wynik dzialania petli for" << endl;
    for (int i = 99; i < 100 && i > -1; i--) {
        cout << i << " ";
    }
    cout << endl;

    //Petla while
    cout << "Wynik dzialania petli while" << endl;
    int o = 99;
    while (o < 100 && o > -1) {
        cout << o << " ";
        o--;
    }

    cout << endl;

    return 0;
}