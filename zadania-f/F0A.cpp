#include <iostream>
using namespace std;

void inicjal() {
    for (int i = 0; i < 10; i++)
    {
        cout << "*********       *          *\n";
        cout << "        *       *          *\n";
        cout << "        *       *          *\n";
        cout << "        *       *          *\n";
        cout << "*       *       *          *\n";
        cout << "*       *       *          *\n";
        cout << "*********       ************\n";
        cout << endl;
    }
}

int main() {
    inicjal();
    return 0;
}