#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentenceOne, sentenceTwo;

    cout << "Wpisz pierwszy ciag znakow: ";
    getline(cin, sentenceOne);
    
    cout << "Wpisz drugi ciag znakow: ";
    getline(cin, sentenceTwo);

    if (sentenceOne.length() < sentenceTwo.length())
        cout << sentenceOne << '\n' << sentenceTwo;
    else
        cout << sentenceTwo << '\n' << sentenceOne;

    
    return 0;
}