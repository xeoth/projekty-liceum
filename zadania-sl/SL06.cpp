#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int recalculate(string recalculated, int system) {
  int decimal = 0, counter = 0;

  for (int i = recalculated.size()-1; i >= 0; i--)
  {
    decimal += (recalculated[i]-48)*pow(system, recalculated.size()-i-1);
  }

  return decimal;
}

int main() {
  int system;
  string recalculated;

  cout << "Podaj liczbe do konwersji na sys. dziesietny: ";
  getline(cin, recalculated);

  cout << "Podaj system: ";
  cin >> system;

  cout << "Przeliczone: " << recalculate(recalculated, system);

  return 0;
}