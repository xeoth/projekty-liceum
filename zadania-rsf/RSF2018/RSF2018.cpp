#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int main()
{
    fstream write;
    write.open("wyniki6.txt", ios::out);

    // ppkt. 6.1
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

    // ppkt. 6.2
    {
        write << "6.2 ";

        fstream read;
        read.open("slowa.txt", ios::in);

        int count = 0;
        for (int i = 0; i < 1000; i++)
        {
            string current[2];
            read >> current[0] >> current[1];

            if (current[1].find(current[0]) != string::npos)
                count++;
        }

        write << count << '\n';
    }

    // ppkt. 6.3
    {
        fstream read;
        read.open("slowa.txt", ios::in);

        int count = 0;
        for (int i = 0; i < 1000; i++)
        {
            string current[2];
            read >> current[0] >> current[1];

            sort(current[0].begin(), current[0].end());
            sort(current[1].begin(), current[1].end());

            if (current[0] == current[1])
                count++;
        }

        write << "6.3 " << count << '\n';
    }
    return 0;
}