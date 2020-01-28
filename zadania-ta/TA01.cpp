#include <iostream>
using namespace std;

int main() {
    char symbol;
    cout << "Wpisz dowolny znak z klawiatury: ";
    cin >> symbol;
    cout << "\nWartosc z tablicy ASCII: " << (int)symbol;
    return 0;
}