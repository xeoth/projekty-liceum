// Po skończeniu tego zadania zrozumiałem, że Python jest o wiele lepszy i bardziej przejrzysty niż c++
// W C++:
// find(begin(tab), end(tab), x) != end(tab)
// Działa tylko w określonych przypadkach, a okazuje się, że to zadanie do nich nie należy.
// Dokumentacja begin i end, a także find jest kompletnie niezrozumiała.

// W Pythonie:
// if x in tab:
// Działa w zasadzie w każdym przypadku, a sama składnia jest banalna.

// Podsumowując: Python jest prostszy i nowszy, podczas, gdy C++ ma bardziej skomplikowaną składnię.
// Więc, czemu nie przerzucimy się w całości na Pythona?

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