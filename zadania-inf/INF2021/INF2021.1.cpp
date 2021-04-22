#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int calculateBase(string number);

int main()
{
  fstream read, write;
  read.open("dane6.txt", ios::in);
  write.open("zadanie6_1.txt", ios::out);

  int baseCounts[10]{};
  for (int ii = 0; ii < 2024; ii++)
  {
    string current;
    read >> current;

    baseCounts[calculateBase(current)]++;
  }

  for (int j = 1; j < 10; j++)
    write << j << ": " << baseCounts[j] << '\n';

  return 0;
}

int calculateBase(string number)
{
  int base = 0;
  for (auto &&i : number)
  {
    int intLetter = i - '0';
    if (intLetter > base)
      base = intLetter;
  }

  return base;
}