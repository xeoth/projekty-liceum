#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>

using namespace std;

int two()
{
  fstream read, write;
  read.open("slowa.txt", ios::in);
  write.open("wyniki4.txt", ios::app);
  int passing = 0;

  for (int i = 0; i < 1000; i++)
  {
    string current;
    read >> current;

    // pierwszy blok musi być zrobiony z zer
    if (current[0] != '0')
      continue;

    size_t firstOne = current.find('1');

    // jeżeli w tekście nie ma jedynki, znaczy, że nie ma drugiego bloku
    if (firstOne == string::npos)
      continue;

    // firstOne to pozycja (iterator) pierwszej jedynki, po której powinny być tylko następne jedynki.
    // jeżeli występuje zero, znaczy, że mamy do czynienia z wieloma blokami
    else if (count(current.begin() + firstOne, current.end(), '0') != 0)
      continue;

    passing++;
  }

  write << "2. " << passing << '\n';
  cout << "2. " << passing << '\n';
}