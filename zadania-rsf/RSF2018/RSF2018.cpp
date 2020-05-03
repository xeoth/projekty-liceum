#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
    fstream write;
    write.open("wyniki6.txt", ios::out);

    // ppkt. a
    {
        fstream read;
        read.open("slowa.txt", ios::in);

        int count = 0;
        for (int i = 0; i < 2000; i++)
        {
            string current;
            read >> current;

            if (current[current.size() - 1] == 'A')
                count++;
        }

        write << "6.1 " << count << '\n';
    }

    return 0;
}