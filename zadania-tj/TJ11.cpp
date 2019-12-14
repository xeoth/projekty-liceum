#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int countOccurences(int randomArray[]) {
    // Read data from array and count digit occurences
    int countOccurences[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    
    for (int i = 0; i < 100; i++)
    {
        int current = randomArray[i];
        countOccurences[current]++;
    }

    return countOccurences[10];
}

void displayCounters(int counted[]) {
    // Display how many times a digit has occured in the array

    cout << "Liczba:            0  1  2  3  4  5  6  7  8  9";
    cout << "Liczba wylosowan: ";
    for (int i = 0; i < 10; i++)
    {
        cout << counted[i];
    }
}

int main() {
    // Set the start point to time
    srand(time(NULL));

    // Write data to array
    int randomArray[100];
    for (int i = 0; i < 100; i++)
    {
        randomArray[i] = rand()%9;
    }

    displayCounters(countOccurences(randomArray));


    return 0;
}