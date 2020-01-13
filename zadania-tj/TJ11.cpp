#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// To return an array, we have to declare a pointer function   
int * countOccurences(int randomArray[]) {
    // Read data from array and count digit occurences

    // To return an array, we also have to declare it as static
    static int countOccurences[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    
    for (int i = 0; i < 100; i++)
    {
        int current = randomArray[i];
        countOccurences[current]++;
    }

    return countOccurences;
}

void displayCounters(int counted[]) {
    // Display how many times a digit has occured in the array

    cout << "Liczba:            0  1  2  3  4  5  6  7  8  9" << endl;
    cout << "Liczba wylosowan: ";
    for (int i = 0; i < 10; i++)
    {
        if (counted[i] <= 9)
            cout << ' ';
        cout << counted[i] << ' ';
    }
}

void displayTopDigits(int counted[]) {
    // Display top digits

    // Check what is the biggest number of digits that exist in the array
    int top = counted[0]/2, howMany = 0;
    for (int i = 0; i < 10; i++)
    {
        int current = counted[i]/2;
        if (top < current)
            top = current;
        else if (top == current)
            howMany++;
    }
    for (int j = 0; j < 10; j++)
    {
        // cout << counted[j]/2 << ' ';
        if (counted[j]/2 == top)
            cout << j << ' ';
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

    // Display how many times each digit was displayed
    displayCounters(countOccurences(randomArray));

    // Display top numbers
    cout << endl << endl << "Najczesciej zostaly wylosowane te liczby:" << endl;

    displayTopDigits(countOccurences(randomArray));

    return 0;
}