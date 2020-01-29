#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;

    cout << "Wpisz ciag znakow: ";
    getline(cin, sentence);

    for (int i = 0; i < sentence.length(); i++)
    {
        if (sentence[i] == 's')
            sentence[i] = 'p';
    }
    
    cout << sentence;
    return 0;
}