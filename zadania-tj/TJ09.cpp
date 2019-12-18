#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));

    int tab1[10], tab2[10];

    // Wypełnianie tablic
    for (int i = 0; i < 10; i++)
    {
        tab1[i] = rand()%100 + 100;
        tab2[i] = rand()%100 + 200;
    }
    

    // Wyświetlanie wartości z tablic
    
    // Wyświetlanie tab1

    cout << "Wartosci tab1" << endl;
    for (int k = 0; k < 10; k++)
    {
        cout << tab1[k] << ' ';
    }

    // Wyświetlanie tab2

    cout << endl << "Wartosci tab2" << endl;
    for (int l = 0; l < 10; l++)
    {
        cout << tab2[l] << ' ';
    }
    
    
    

    return 0;
}
