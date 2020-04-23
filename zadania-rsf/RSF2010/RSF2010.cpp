#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

bool areAllSizesEqual(vector<string> &line, int firstSize)
{
    for (int i = 1; i < 5; i++)
    {
        if (line[i].size() != firstSize)
            return false;
    }

    return true;
}

int main()
{

    // ppkt. a
    {
        fstream read, write4a, write4b;
        read.open("anagram.txt", ios::in);
        write4a.open("odp_4a.txt", ios::out);
        write4b.open("odp_4b.txt", ios::out);

        for (int i = 0; i < 200; i++)
        {
            // wypełnianie tabeli stringami z pliku
            vector<string> line;
            for (int j = 0; j < 5; j++)
            {
                string current;
                read >> current;
                line.push_back(current);
            }

            // porównywanie długości
            if (areAllSizesEqual(line, line[0].size()))
            {
                for (string current : line)
                    write4a << current << ' ';
                write4a << '\n';
            }
        }
    }
    return 0;
}