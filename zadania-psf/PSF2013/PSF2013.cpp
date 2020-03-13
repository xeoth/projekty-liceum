#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int countCharacters(string a, char b) {
  int count = 0;

  for (int i = 0; i < a.size(); i++)
  {
    if (a[i] == b)
      count++;
  }
  
  return count;
}

int main() {
  
  fstream write;
  write.open("zadanie4.txt", ios::out);

  // ppkt. a
  {
    fstream read;
    read.open("napisy.txt", ios::in);

    int count = 0;
    for (int i = 0; i < 1000; i++)
    {
      string current;
      read >> current;

      if (current.size()%2 == 0)
        count++;
    }

    write << "a " << count << '\n';
  }

  // ppkt. b
  {
    fstream read;
    read.open("napisy.txt", ios::in);

    int count = 0;
    for (int i = 0; i < 1000; i++)
    {
      string current;
      read >> current;

      if (countCharacters(current, '1') == countCharacters(current, '0'))
        count++;
    }

    write << "b " << count << '\n';
    
  }

  // ppkt. c
  {
    fstream read;
    read.open("napisy.txt", ios::in);

    int onlyZero = 0, onlyOne = 0;
    for (int i = 0; i < 1000; i++)
    {
      string current;
      read >> current;

      int currentZero = countCharacters(current, '0'), currentOne = countCharacters(current, '1');

      if (currentZero == 0 && currentOne != 0)
        onlyOne++;
      else if (currentZero != 0 && currentOne == 0)
        onlyZero++;
    }

    write << "c tylko 0: " << onlyZero << " tylko 1: " << onlyOne << '\n';

  }

  // ppkt. d
  // TODO: ppkt d.
  {

  }

  return 0;
}