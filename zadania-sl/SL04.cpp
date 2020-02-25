#include <iostream>
#include <string>
using namespace std;

int main() {
  string sentence;

  cout << "Wpisz ciag znakow: ";
  getline(cin, sentence);

  int digitCount = 0;
  for (int i = 0; i < sentence.length(); i++)
  {
    if (sentence[i] >= '0' && sentence[i] <= '9')
      digitCount++;
  }
  
  cout << "\nTwoj ciag znakow zawiera " << digitCount << " cyfr(y).";

  return 0;
}