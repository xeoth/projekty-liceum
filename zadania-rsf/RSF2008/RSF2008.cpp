#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
using namespace std;

string end(string word)
{
    string end, part;

    for (int i = 0; i < word.size(); i++)
    {
        part += word[i];

        string reversedPart = part;
        reverse(reversedPart.begin(), reversedPart.end());

        if (part == reversedPart)
            end = "";
        else
            end = word[i] + end;
    }

    return end;
}

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

    // ppkt. b
    {
        fstream read, writeSlowa, writeHasla;
        read.open("slowa.txt", ios::in);
        writeSlowa.open("slowa_b.txt", ios::out);
        writeHasla.open("hasla_b.txt", ios::out);

        writeSlowa << "Hasła mające 12 znaków:" << '\n';

        string longest, shortest;
        int lengthSum = 0;
        for (int i = 0; i < 1000; i++)
        {
            string current;
            read >> current;

            string reversed = current;
            reverse(reversed.begin(), reversed.end());

            string password;
            if (current == reversed)
                password = current;
            else
                password = end(current) + current;

            writeHasla << password << '\n';

            // obliczanie najdłuższego hasła
            if (!i) // i = 0
                longest = shortest = password;
            else
            {
                if (password.size() > longest.size())
                    longest = password;
                else if (password.size() < shortest.size())
                    shortest = password;
            }

            if (password.size() == 12) // po co im hasła co mają akurat 12? :P
                writeSlowa << password << '\n';

            lengthSum += password.size();
        }

        writeSlowa << "\nNajdłuższe hasło: " << longest << '\n'
                   << "Najkrótsze hasło: " << shortest << '\n'
                   << "Suma długości: " << lengthSum;
    }
    return 0;
}