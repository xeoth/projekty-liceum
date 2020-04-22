#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
using namespace std;

int main()
{

    // ppkt. a
    {
        fstream read, writeSlowa, writeHasla;
        read.open("slowa.txt", ios::in);
        writeSlowa.open("slowa_a.txt", ios::out);
        writeHasla.open("hasla_a.txt", ios::out);

        string longest = "", shortest = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"; // 30 znaków, więcej nie może być
        for (int i = 0; i < 1000; i++)
        {
            string current;
            read >> current;

            reverse(current.begin(), current.end());

            writeHasla << current << '\n';

            if (current.size() > longest.size())
                longest = current;
            else if (current.size() < shortest.size())
                shortest = current;
        }

        writeSlowa << "Najdłuższe hasło to \"" << longest << "\". "
                   << "Długość tego hasła to " << longest.size() << ".\n"
                   << "Najkrótsze hasło to \"" << shortest << "\". "
                   << "Długość tego hasła to " << shortest.size() << ".";
    }

    return 0;
}