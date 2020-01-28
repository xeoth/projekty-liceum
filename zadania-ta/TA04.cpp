#include <iostream>
using namespace std;

int main() {
    char letter, reversed;

    cout << "Podaj litere: ";
    cin >> letter;

    if (letter >= 'a' && letter <= 'z')
        reversed = (char)letter-32;
    else if (letter >= 'A' && letter <= 'Z')
        reversed = (char)letter+32;

    cout << "\nOdpowiednik twojej litery to: " << reversed;

    return 0;
}