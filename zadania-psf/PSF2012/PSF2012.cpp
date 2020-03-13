#include <iostream>
#include <fstream>
using namespace std;

int digitSum(int a) {
  int sum;
  while (a >= 1) {
    sum += a%10;
    a /= 10;
  }

  return sum;
}

bool isGrowing(int a) {
  while (a >= 1) {
    if (a%10 <= (a/10)%10)
      return false;
    a /= 10;
  }
  return true;
}

int main() {
  
  fstream write;
  write.open("zadanie4.txt", ios::out);

  // ppkt. a
  {
    fstream read;
    read.open("cyfry.txt", ios::in);

    int count = 0;
    for (int i = 0; i < 1000; i++) {
      int current;
      read >> current;

      if (current%2 == 0)
        count++;
    }

    write << "a " << count << '\n';
    read.close();
  }

  // ppkt. b
  {
    fstream read;
    read.open("cyfry.txt", ios::in);

    //szukanie największej
    int biggest = 0;
    for (int i = 0; i < 1000; i++) {
      int current;
      read >> current;
      int currentSum = digitSum(current);

      if (currentSum > biggest)
        biggest = current;
    }

    // przywracanie pliku do pierwszej linii
    read.clear();

    // szukanie najmniejszej
    int smallest = biggest;
    for (int j = 0; j < 1000; j++)
    {
      int current;
      read >> current;
      int currentSum = digitSum(current);

      if (currentSum < smallest)
        smallest = current;
    }
    
    read.close();

    write << "b najm. " << smallest << " najw. " << biggest << '\n';
  }

  // ppkt. c
  {
    fstream read;
    read.open("cyfry.txt", ios::in);

    write << "c ";
    for (int i = 0; i < 1000; i++)
    {
      int current;
      read >> current;

      if (isGrowing(current))
        write << current << ' ';
    }
    
  }

  return 0;
}