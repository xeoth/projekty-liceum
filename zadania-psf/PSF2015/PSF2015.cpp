#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  
  fstream write;
  write.open("wynik5.txt", ios::out);

  {
    fstream read;
    read.open("slowa.txt", ios::in);

    int count[12]={};
    for (int i = 1; i < 1000; i++)
    {
      string current;
      read >> current;

      count[current.size()-1]++;
    }

    write << "5.1:\n";

    for (int j = 0; j < 12; j++)
    {
      write << j+1 << ' ' << count[j] << '\n';
    }
    
  }

  return 0;
}