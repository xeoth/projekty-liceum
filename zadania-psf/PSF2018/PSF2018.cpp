#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool isPalindromic(string num) {
    for (int i = 0; i < num.size()/2; i++)
    {
        if (num[i] != num[num.size()-i-1])
            return false;
    }

    return true;
    
}

int digitSum(int num) {
    int sum;
    while (num >= 1)
    {
        sum += num%10;
        num /= 10;
    }
    
    return sum;
}

int main() {
    
    fstream write;
    write.open("wyniki5.txt", ios::out);

    // ppkt. 1
    {

        fstream read;
        read.open("liczby.txt", ios::in);

        int biggest = 0;

        for (int i = 0; i < 1000; i++)
        {
            int current;
            read >> current;

            if (current > biggest && current%2 == 0)
                biggest = current;
        }

        write << "5.1 " << biggest << '\n';
        
        read.close();
    }

    // ppkt. 2
    {
        fstream read;
        read.open("liczby.txt", ios::in);

        write << "\n5.2\n---\n";

        for (int i = 0; i < 1000; i++)
        {
            string current;
            read >> current;

            if (isPalindromic(current))
                write << current << '\n';
        }
        
        read.close();

    }

    // ppkt. 3
    {
        fstream read;
        read.open("liczby.txt", ios::in);

        write << "\n5.3\n---\n";

        int fullSum = 0;
        for (int i = 0; i < 1000; i++)
        {
            int current;
            read >> current;

            int currentSum = digitSum(current);

            fullSum += currentSum;

            if (currentSum > 30)
                write << current << '\n';
        }

        write << "Pełna suma: " << fullSum;
        
    }

    write.close();
    return 0;
}
