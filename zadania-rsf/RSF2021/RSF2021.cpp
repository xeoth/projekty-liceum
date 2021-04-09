#include <iostream>
#include <fstream>
#include <map>
#include <string>

using namespace std;

int main()
{
  // kod kraju : liczba galerii
  map<string, int> galleries;

  fstream read, write;
  read.open("galerie.txt", ios::in);
  write.open("wynik4_1.txt", ios::out);

  // wstawianie każdej linii
  for (int i = 0; i < 50; i++)
  {
    string country;

    read >> country;

    // pomijanie niepotrzebnych danych
    read.ignore(1000, '\n');

    galleries[country]++;
  }

  for (auto &i : galleries)
  {
    cout << i.first << ' ' << i.second << '\n';
    write << i.first << ' ' << i.second << '\n';
  }
}
