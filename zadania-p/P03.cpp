#include <iostream>
using namespace std;

int main() {
    //Pętla for
    cout << "Wynik dzialania petli for" << endl;
    for (int i = 0; i < 100; i = i+2) {
        cout << i << " ";
    }
    cout << endl;


    cout << "Wynik dzialania petli while" << endl;
    int o = 1;
    while (o < 100) {
        cout << o << " ";
        o = o + 2;
    }
    cout << endl;

    return 0;
}