#include <iostream>
#include <cstdlib>
#include <ctime>
#include "bubblesort.hpp"
using namespace std;

int main() {
    srand(time(NULL));

    cout << "Tablica:\n";

    int array[10], rising[10], falling[10];
    for (int i = 0; i < 10; i++)
    {
        array[i] = rand()%90+10;
        rising[i] = array[i];
        falling[i] = array[i];
        cout << array[i] << ' ';
    }

    cout << "\nPosortowana:\n";
    bubbleSortFalling(falling, 10);
    bubbleSortRising(rising, 10);

    for (int j = 0; j < 5; j++)
    {
        array[j] = rising[j];
    }
    for (int k = 5; k <= 9; k++)
    {
        array[k] = falling[k];
    }
    
    for (int l = 0; l < 10; l++)
    {
        cout << array[l] << ' ';
    }
    
    return 0;
}