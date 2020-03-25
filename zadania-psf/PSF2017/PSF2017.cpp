#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int digitSum(int a) {
    int sum = 0;

    while (a >= 1) {
        sum += a%10;
        a /= 10;
    }

    return sum;
}

int main() {

    fstream write;
    write.open("wyniki4.txt", ios::out);

    // ppkt. 1
    {
        fstream read;
        read.open("liczby.txt", ios::in);

        int count = 0;
        for (int i = 0; i < 1000; i++)
        {
            int first, second, third;
            read >> first;
            read >> second;
            read >> third;

            if (first < second && second < third)
                count++;
        }

        write << "4.1 " << count << '\n';
        
    }

    // ppkt. 2
    {

        fstream read;
        read.open("liczby.txt", ios::in);

        int fullDivisor = 0;
        for (int i = 0; i < 1000; i++)
        {
            int first, second, third;
            read >> first;
            read >> second;
            read >> third;

            fullDivisor += __gcd(first, __gcd(second, third));
        }

        write << "4.2 " << fullDivisor << '\n';
        
    }

    // ppkt. 3
    {
        
        fstream read;
        read.open("liczby.txt", ios::in);

        int count35 = 0, biggest = 0, countBiggest = 0;
        for (int i = 0; i < 1000; i++)
        {
            int first, second, third;
            read >> first;
            read >> second;
            read >> third;

            int currentSum = digitSum(first) + digitSum(second) + digitSum(third);

            if (currentSum == 35)
                count35++;
            
            // znajdowanie i liczenie największej sumy
            if (currentSum > biggest) {
                biggest = currentSum;
                countBiggest = 1;
            } else if (currentSum == biggest) {
                countBiggest++;
            }
        }

        write << "wiersze, dla których suma = 35: " << count35 << "\nnajwiększa suma cyfr w wierszu: " << biggest << "\nwystępuje ona " << countBiggest << " razy.";
        
    }
    
    return 0;
}