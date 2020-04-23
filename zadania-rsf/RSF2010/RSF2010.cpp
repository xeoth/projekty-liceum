#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool isAnagram(vector<string> &line)
{
    string first = line[0];
    sort(first.begin(), first.end());

    // usuwanie pierwszego elementu
    line.erase(line.begin());

    // sortowanie pozostałych elementów i sprawdzanie czy są równe pierwszemu
    for (string val : line)
    {
        sort(val.begin(), val.end());

        if (val != first)
            return false;
    }

    return true;
}

bool areAllSizesEqual(vector<string> &line)
{
    for (int i = 1; i < 5; i++)
        if (line[i].size() != line[0].size())
            return false;

    return true;
}

int main()
{

    // ppkt. a
    {
        fstream read, write4a;
        read.open("anagram.txt", ios::in);
        write4a.open("odp_4a.txt", ios::out);

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
            if (areAllSizesEqual(line))
            {
                for (string current : line)
                    write4a << current << ' ';
                write4a << '\n';
            }
        }
    }

    // ppkt. b
    {
        fstream read, write4b;
        read.open("anagram.txt", ios::in);
        write4b.open("odp_4b.txt", ios::out);

        for (int i = 0; i < 200; i++)
        {
            vector<string> line;
            for (int j = 0; j < 5; j++)
            {
                string current;
                read >> current;
                line.push_back(current);
            }

            // isAnagram usuwa pierwszy element, więc nie możemy dać tam line
            vector<string> lineBackup = line;
            if (isAnagram(lineBackup))
            {
                for (string val : line)
                    write4b << val << ' ';
                write4b << '\n';
            }
        }
    }
    return 0;
}