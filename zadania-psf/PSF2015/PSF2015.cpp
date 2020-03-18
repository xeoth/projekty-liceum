#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string reverse(string a) {
  string reversed;

  for (int i = a.size(); i >= 0; i--) {
    reversed += a[i];
  }

  reversed.erase(0, 1);

  return reversed;
}

int main() {
  
  fstream write;
  write.open("wynik5.txt", ios::out);

  // ppkt. 1
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

  // ppkt. 2
  {
    fstream readNowe;
    readNowe.open("nowe.txt", ios::in);

    write << "5.2:\n";

    // dla każdego słowa w nowe.txt, przeszukaj ile razy to słowo
    // występuje w slowa.txt
    for (int i = 0; i < 25; i++)
    {
      string currentNowe;
      readNowe >> currentNowe;

      fstream readSlowa;
      readSlowa.open("slowa.txt", ios::in);

      int instancesInSlowa = 0, reversedInstances = 0;
      for (int j = 0; j < 1000; j++)
      {
        string currentSlowa;
        readSlowa >> currentSlowa;

        if (currentNowe == currentSlowa)
          instancesInSlowa++;
        else if (reverse(currentNowe) == currentSlowa)
          reversedInstances++;
      }
      readSlowa.close();

      write << currentNowe << ' ' << instancesInSlowa << ' ' << reversedInstances << '\n';
      
    }
    
  }

  return 0;
}