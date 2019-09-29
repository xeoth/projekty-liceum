#include <iostream>
using namespace std;

int main() {
    //Pętla for
    cout << "Wynik dzialania petli for" << endl;
    for (int i = 0; i < 100; i++) {
        cout << i << " ";
    }
    cout << endl;


    cout << "Wynik dzialania petli while" << endl;
    int o = 0;
    while (o < 100) {
        cout << o << " ";
        o++;
    }
    return 0;
    
}