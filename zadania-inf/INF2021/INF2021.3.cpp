#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool isAntiPalindromical(string number);

int main()
{
  fstream read, write;
  read.open("dane6.txt", ios::in);
  write.open("zadanie6_3.txt", ios::out);

  int count = 0;

  for (int i = 0; i < 2023; i++)
  {
    string current;
    read >> current;

    if (isAntiPalindromical(current))
    {
      write << current << '\n';
      count++;
    }
  }

  write << '\n'
        << count;

  return 0;
}

bool isAntiPalindromical(string number)
{
  int n = number.size();
  for (int i = 0; i < n / 2; i++)
    if (number[i] == number[n - i - 1])
      return false;
  return true;
}