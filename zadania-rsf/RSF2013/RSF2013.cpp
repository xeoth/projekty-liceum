#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
using namespace std;

int octToDec(int octal)
{
    int decimal = 0;

    for (int i = 0; octal > 0; i++)
    {
        decimal += (octal % 10) * pow(8, i);
        octal /= 10;
    }

    return decimal;
}

// sprawdza czy spełnia warunek podany w ppkt. c
bool pointCCondition(string num)
{
    for (int j = 1; j < num.size(); j++)
    {
        if (num[j - 1] > num[j])
            return false;
    }

    return true;
}

int main()
{
    fstream write;
    write.open("wyniki6.txt", ios::out);

    // ppkt. a
    {
        fstream read;
        read.open("dane.txt", ios::in);

        int sameEndAndBegin = 0;
        for (int i = 0; i < 5000; i++)
        {
            string current;
            read >> current;

            if (current[0] == current[current.size() - 1])
                sameEndAndBegin++;
        }

        write << "a. " << sameEndAndBegin << '\n';
    }

    // ppkt. b
    {
        fstream read;
        read.open("dane.txt", ios::in);

        int sameEndAndBegin = 0;
        for (int i = 0; i < 5000; i++)
        {
            string current;
            read >> current;

            string currentDec = to_string(octToDec(stoi(current)));

            if (currentDec[0] == currentDec[currentDec.size() - 1])
                sameEndAndBegin++;
        }

        write << "b. " << sameEndAndBegin << '\n';
    }

    // ppkt. c
    {
        fstream read;
        read.open("dane.txt", ios::in);

        // 200...9 jest poza zakresem podanym w zadaniu,
        // więc musi być większy od każdej z liczb
        int biggest = 0, smallest = 20000009, count = 0;
        for (int i = 0; i < 5000; i++)
        {
            string current;
            read >> current;

            if (pointCCondition(current))
            {
                count++;

                if (stoi(current) < smallest)
                    smallest = stoi(current);
                else if (stoi(current) > biggest)
                    biggest = stoi(current);
            }
        }

        write << "c. Ilość: " << count
              << "; Największa: " << biggest
              << "; Najmniejsza: " << smallest
              << " (liczby w systemie oktalnym)";
    }

    return 0;
}