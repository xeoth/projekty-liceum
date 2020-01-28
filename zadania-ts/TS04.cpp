#include <iostream>
#include <cstdlib>
#include <ctime>
#include "bubblesort.hpp"
using namespace std;

void generate(int array[], int size, int smallest, int biggest) {
    for (int i = 0; i < size; i++)
    {
        int currentRandom = rand()%biggest+smallest;
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

int main() {
    cout << "Podaj 6 liczb od 1 do 49\n";

    int userNumbers[6];
    for (int i = 0; i < 5; i++)
    {
        cout << "Podaj liczbe: ";
        cin >> userNumbers[i];
        cout << '\n';
    }


    srand(time(NULL));
    int randomNumbers[6];
    generate(randomNumbers, 6, 1, 49);

    bubbleSortRising(userNumbers, 6);
    bubbleSortRising(randomNumbers, 6);

    cout << "Twoje liczby\n";
    for (int j = 0; j < 5; j++)
    {
        cout << userNumbers[j] << ' ';
    }
    cout << '\n';

    cout << "Liczby komputera:\n";
    for (int k = 0; k < 5; k++)
    {
        cout << randomNumbers[k] << ' ';
    }
    cout << '\n';

    cout << "Trafione liczby:\n";
    for (int l = 0; l < 5; l++)
    {
        for (int m = 0; m < 5; m++)
        {
            if (userNumbers[m] == randomNumbers[l])
                cout << userNumbers[m] << ' ';
        }
        
    }
    
    return 0;
}