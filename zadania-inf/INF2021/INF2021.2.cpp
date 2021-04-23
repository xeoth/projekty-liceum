#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int calculateBase(string number);
int calculateSum(string number);

int main() {
    fstream read, write;
    read.open("dane6.txt", ios::in);
    write.open("zadanie6_2.txt", ios::out);
    string bases[10]{};
    int sums[10]{};

    for (int i = 0; i < 2024; i++)
    {
        string current;
        read >> current;

        int base = calculateBase(current);
        int sum = calculateSum(current);

        if (sums[base] < sum)
        {
            sums[base] = sum;
            bases[base] = current;
        }
    }

    for (int ii = 1; ii < 10; ii++)
    {
        write << ii+1 << ": " << bases[ii] << '\n';
    }
	return 0;
}

int calculateBase(string number)
{
    int base = 0;
    for (auto&& i : number)
    {
        int intLetter = i - '0';
        if (intLetter > base)
            base = intLetter;
    }

    return base;
}

int calculateSum(string number) {
    int sum = 0;
    for (char i : number)
        sum += i - '0';
    return sum;
}