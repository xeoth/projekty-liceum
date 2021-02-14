#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int one()
{
  fstream read, write;
  read.open("slowa.txt", ios::in);
  write.open("wyniki4.txt", ios::out);

  int passing = 0;

  for (int i = 0; i < 1000; i++)
  {
    string current;
    read >> current;

    int zeros = count(current.begin(), current.end(), '0'),
        ones = count(current.begin(), current.end(), '1');

    if (zeros > ones)
      passing++;
  }

  write << "1. " << passing << '\n';
  cout << "1. " << passing << '\n';

  return 0;
}
