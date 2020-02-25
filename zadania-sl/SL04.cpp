#include <iostream>
#include <string>
using namespace std;

string recalculate(int decimal, int system) {
  string recalculated, chars = "0123456789ABCDEF";
  
  while (decimal > 0) {
    recalculated = chars[decimal%system]+recalculated;

    decimal /= system;
  }

  return recalculated;
}

int main() {

  int decimal, system;

  cout << "Podaj liczbe w systemie dziesietnym: ";
  cin >> decimal;

  cout << "\nPodaj system: ";
  cin >> system;

  string recalculated = recalculate(decimal, system);

  cout << '\n' << recalculated;

  return 0;
}