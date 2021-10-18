#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

bool isPrime(int num)
{
    if (num < 2)
        return false;

    for (int i = 2; i < sqrt(num) + 1; i++)
    {
        if (num % i == 0)
            return false;
    }

    return true;
}

int main()
{
    fstream write;
    write.open("ZADANIE5.TXT", ios::out);

    // ppkt. a
    {
        fstream read;
        read.open("NAPIS.TXT", ios::in);

        int countPrime = 0;
        for (int i = 0; i < 1000; i++)
        {
            string current;
            read >> current;

            int asciiSum = 0;
            for (char val : current)
                asciiSum += val;

            if (isPrime(asciiSum))
                countPrime++;
        }

        write << "a. Liczba napisów pierwszych: " << countPrime << '\n';
    }

    // ppkt. b
    {
        write << "b. Napisy rosnące:\n";

        fstream read;
        read.open("NAPIS.TXT", ios::in);

        for (int i = 0; i < 1000; i++)
        {
            string current;
            read >> current;

            string sortedCurrent = current;
            sort(sortedCurrent.begin(), sortedCurrent.end());

            if (sortedCurrent == current)
                write << current << '\n';
        }
    }

    // ppkt. c
    {
        write << "c. Napisy występujące więcej niż raz:\n";

        vector<string> listOfWords;

        fstream read;
        read.open("NAPIS.TXT", ios::in);

        for (int i = 0; i < 1000; i++)
        {
            string current;
            read >> current;

            listOfWords.push_back(current);
        }

        sort(listOfWords.begin(), listOfWords.end());

        for (int i = 0; i < listOfWords.size(); i++)
        {
            if (listOfWords[i] == listOfWords[i + 1] && listOfWords[i] != listOfWords[i + 2])
                write << listOfWords[i] << '\n';
        }
    }
    return 0;
}