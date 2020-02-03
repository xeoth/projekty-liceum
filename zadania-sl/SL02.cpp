#include <iostream>
#include <string>
using namespace std;

string change(int decimal, int system) {
  string changed;
  char mod;

  while (decimal > 0)
  {
    mod = decimal%system+48;
    changed = mod + changed;
    decimal /= system;
  }

  return changed;
}

int main() {
  int number, numberSystem;

  cout << "Podaj liczbe w systemie dziesietnym: ";
  cin >> number;

  cout << "Podaj system liczbowy: ";
  cin >> numberSystem;

  cout << "Liczba w podanym systemie:\n" << change(number, numberSystem);
  return 0;
}