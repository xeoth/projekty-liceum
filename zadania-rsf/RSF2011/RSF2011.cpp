#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <bitset>
using namespace std;

int main()
{
    fstream write;
    write.open("zadanie6.txt", ios::out);

    // ppkt. a
    {
        fstream read;
        read.open("liczby.txt", ios::in);

        int countEven = 0;
        // parzysta - 0; nieparzysta - 1
        for (int i = 0; i < 1000; i++)
        {
            string current;
            read >> current;

            if (current[current.size() - 1] == '0')
                countEven++;
        }

        write << "a. Ilość liczb parzystych: " << countEven << '\n';
    }

    // ppkt. b
    {
        fstream read;
        read.open("liczby.txt", ios::in);

        long biggest = 0;
        for (int i = 0; i < 1000; i++)
        {
            string current;
            read >> current;

            int currentSize = current.size();
            unsigned long decimal = bitset<16>(current).to_ulong();

            if (decimal > biggest)
                biggest = decimal;
        }

        write << "b. Największa liczba w systemie dziesiętnym: " << biggest
              << "; w systemie dwójkowym: " << bitset<16>(biggest).to_string() << '\n';
    }

    // ppkt. c
    {
        fstream read;
        read.open("liczby.txt", ios::in);

        long nineDigitSum = 0;
        int nineDigitAmount = 0;
        for (int i = 0; i < 1000; i++)
        {
            string current;
            read >> current;

            if (current.size() == 9)
            {

                nineDigitSum += bitset<16>(current).to_ulong();
                nineDigitAmount++;
            }
        }

        write << "c. Ilość liczb 9-cyfrowych: " << nineDigitAmount
              << "; Suma liczb 9-cyfrowych w systemie dwójkowym: "
              << bitset<16>(nineDigitSum).to_string() << '\n'
              << nineDigitSum;
    }
    return 0;
}