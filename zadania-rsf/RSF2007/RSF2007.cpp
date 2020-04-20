#include <iostream>
#include <cmath>
#include <bitset>
#include <fstream>
using namespace std;

// TODO: determine whether 2 is prime or not
bool isPrime(long num)
{
    if (num == 2 || num == 3)
        return true;
    else if (num % 2 == 0 || num % 3 == 0)
        return false;

    int i = 5, w = 2;

    while (i * i <= num)
    {
        if (num % i == 0)
            return false;

        i += w;
        w = 6 - w;
    }
}

int digitSum(long num)
{
    int sum = 0;
    while (num >= 1)
    {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

bool isSuperPrime(int num)
{
    if (isPrime(num) && isPrime(digitSum(num)))
        return true;
    else
        return false;
}

bool isSuperBPrime(int num)
{
    string bit = bitset<64>(num).to_string();

    if (isSuperPrime(num) && isPrime(digitSum(stol(bit))))
        return true;
    else
        return false;
}

int main()
{
    fstream t1, t2, t3;
    t1.open("1.txt", ios::out);
    t2.open("2.txt", ios::out);
    t3.open("3.txt", ios::out);

    // ppkt. a
    {
        // liczenie każdego przedziału
        int countFirst = 0, countSecond = 0, countThird = 0;

        // <2, 1000>
        for (int i = 2; i <= 1000; i++)
        {
            if (isSuperBPrime(i))
            {
                countFirst++;
                t1 << i << '\n';
            }
        }

        // <100, 10000>
        for (int j = 100; j <= 10000; j++)
        {
            if (isSuperBPrime(j))
            {
                countSecond++;
                t2 << j << '\n';
            }
        }

        // <1000, 100000>
        for (int k = 1000; k <= 100000; k++)
        {
            if (isSuperBPrime(k))
            {
                countThird++;
                t3 << k << '\n';
            }
        }

        cout << "a." << '\n'
             << "Nr. |    Przedzial    | L. wyst\n"
             << "----+-----------------+--------\n"
             << "1   |    <2,1000>     | " << countFirst << '\n'
             << "2   |   <100,10000>   | " << countSecond << '\n'
             << "3   |  <1000,100000>  | " << countThird << '\n';
    }

    cout << "\n\n"
         << "b."
         << '\n';

    // ppkt. b
    {
        int countPrimes = 0;
        // <100, 10000>
        for (int i = 100; i < 10000; i++)
        {
            if (isPrime(digitSum(i)))
                countPrimes++;
        }

        cout << "Liczb w przedziale <100,10000>, których suma cyfr jest liczbą pierwszą jest " << countPrimes << '\n';

        int sumSuperBPrimes = 0;
        for (int j = 100; j < 10000; j++)
        {
            if (isSuperBPrime(j))
                sumSuperBPrimes += j;
        }

        cout << "Czy suma wszystkich liczb \"super B pierwszych\" z przedziału <100,10000> jest liczbą pierwszą? Odp: " << (isPrime(sumSuperBPrimes) ? "tak" : "nie");
    }

    return 0;
}