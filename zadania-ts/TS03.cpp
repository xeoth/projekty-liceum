// Bardziej zrozumiała i przejrzysta wersja w Pythonie:
// https://ts03.xeoth.repl.run
// kod: https://repl.it/@Xeoth/TS03

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "bubblesort.hpp"
using namespace std;

void generate(int array[], int size, int smallest, int biggest) {
    for (int i = 0; i < size; i++)
    {
        int currentRandom = rand()%(smallest+1)+(biggest-smallest);
        array[i] = currentRandom;
        for (int j = 0; j < i; j++)
        {
            if (currentRandom == array[j]) {
                i--;
                break;
            }
        }
        
    }
    

}

void writeOut(int array[], int size) {
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << ' ';
    }
    
}

int main() {
    srand(time(NULL));

    int array[10];
    generate(array, 10, 20, 40);

    cout << "\nNieposortowana:\n";
    writeOut(array, 10);

    bubbleSortRising(array, 10);

    cout << "\nPosortowana:\n";
    writeOut(array, 10);

    
    return 0;
}