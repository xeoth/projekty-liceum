#include <iostream>
using namespace std;

int main() {
    cout << "Tablica ASCII:\n";

    int column = 0;
    for (int i = 36; i < 253; i++)
    {
        if (i < 100)
            cout << ' ';

        cout << i << " - " << (char)i;

        if (i < 100) {
            cout << "   ";
        } else {
            cout << "   ";
        }

        if (++column >= 7) {
            cout << '\n';
            column = 0;
        }
    }
    
    return 0;
}