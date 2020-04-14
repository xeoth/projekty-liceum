#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main()
{

    fstream write;
    write.open("wynik.txt", ios::out);

    // ppkt. a
    {
        vector<string> words;
        {
            fstream read;
            read.open("dane.txt", ios::in);

            for (int i = 0; i < 1000; i++)
            {
                string current;
                read >> current;

                words.push_back(current);
            }
        }
        sort(words.begin(), words.end());

        map<string, int> wordCounts; // HashMap z liczbami wystąpień
        // slowo<string>: liczba wystąpień<int>

        // liczenie wystąpień słów
        for (int i = 0; i < words.size(); i++)
        {
            string current = words[i];

            // sprawdzanie czy słowo jest już w mapie
            if (wordCounts.find(current) == wordCounts.end())
                wordCounts[current] = 1;
            else
                wordCounts[current]++;
        }

        write << "a.\n";

        // liczenie ile słów jest powtórzonych
        int countRepeated = 0;
        for (auto const &keyval : wordCounts)
        {
            if (keyval.second > 1)
                countRepeated++;
        }

        write << "Liczba duplikatów: " << countRepeated << '\n';

        // szukanie słowa o największej liczbie wystąpień
        string mostFrequent;
        int appearances = 0;

        for (auto const &keyval : wordCounts)
        {
            if (keyval.second > appearances)
            {
                mostFrequent = keyval.first;
                appearances = keyval.second;
            }
        }

        write << "Najczęściej występujące słowo to \""
              << mostFrequent << "\" i występuje ono "
              << appearances << " razy.";
    }

    write << "\n---\n\nb.\n";

    // ppkt. b
    {
        fstream read;
        read.open("dane.txt", ios::in);

        int countEven = 0;
        for (int i = 0; i < 1000; i++)
        {
            string current;
            read >> current;

            switch (current[current.size() - 1])
            {
            case 'A':
            case 'C':
            case 'E':
                countEven++;
                break;
            default:
                break;
            }
        }

        write << "Ilość liczb parzystych: " << countEven << "\n---\n\n";
    }
    return 0;
}