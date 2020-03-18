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

bool isPrimeSlower(int a) {
  for (int i = 2; i < a-1; i++)
  {
    if (a%i == 0)
      return false;
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

      if (isPrimeSlower(current))
        countPrime++;
    }

    write << "6.1 " << countPrime;
    
  }

  return 0;
}