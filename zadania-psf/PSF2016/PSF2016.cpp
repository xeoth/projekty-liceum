#include <iostream>
#include <fstream>
using namespace std;

// zwykła metoda: 24997 mikrosekund, ta metoda: 1983 mikrosekund
// :D
bool isPrime(int a) {
  if (a == 2 || a == 3)
    return true;
  else if (a%2 == 0 || a%3 == 0)
    return false;
  
  int i = 5, w = 2;

  while (i*i <= a) {
    if (a%i == 0)
      return false;

    i += w;
    w = 6-w;
  }

  return true;
}

int main() {
  
  fstream write;
  write.open("wyniki_6.txt", ios::out);

  // ppkt. 1
  {
    fstream read;
    read.open("dane_6.txt", ios::in);

    int countPrime = 0;
    for (int i = 0; i < 2000; i++)
    {
      int current;
      read >> current;

      if (isPrime(current))
        countPrime++;
    }

    write << "6.1 " << countPrime << '\n';

    read.close();
    
  }

  // ppkt. 2
  {
    fstream read;
    read.open("dane_6.txt", ios::in);

    int biggest = 0;
    for (int i = 0; i < 2000; i++)
    {
      int current;
      read >> current;

      if (current > biggest && isPrime(current))
        biggest = current;
    }

    read.close();
    read.open("dane_6.txt", ios::in);

    int smallest = biggest;
    for (int j = 0; j < 2000; j++)
    {
      int current;
      read >> current;

      if (current < smallest && isPrime(current))
        smallest = current;
    }
    
    write << "6.2 najmniejsza: " << smallest << " największa: " << biggest << '\n';
  }

  // ppkt. 3
  {
    fstream read;
    read.open("dane_6.txt", ios::in);

    write << "6.3\n";

    int count = 0, last;
    for (int i = 0; i < 2000; i++) {
      int current;
      read >> current;

      if ((current-last == 2 || last-current == 2)) {
        if (isPrime(current) && isPrime(last)) {
          count++;
          write << current << " i " << last << '\n';
        }
      }

      if (isPrime(current))
        last = current;
    }

  }
  return 0;
}