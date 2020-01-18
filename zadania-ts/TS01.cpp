#include <iostream>
#include <cstdlib>
#include <ctime>
#include "bubblesort.hpp" // dołączenie pliku bubblesort.hpp w którym znajduje się algorytm sortowania bąbelkowego
using namespace std;

int main() {
  // Ustawienie seeda na czas
  srand(time(NULL));

  cout << "Tablica pseudolosowych" << endl;
  // Tworzenie i uzupełnienie tabeli
  int randomArray[10];
  for (int i = 0; i < 9; i++)
  {
    randomArray[i] = rand()%90+10;
    cout << randomArray[i] << ' ';
  }

  cout << '\n';

  cout << "Posortowana rosnaco" << endl;
  int *sortedRising = bubbleSortRising(randomArray, 9);
  for (int k = 0; k < 9; k++)
  {
    cout << sortedRising[k] << ' ';
  }

  cout << '\n';

  cout << "Posortowana malejaco" << endl;
  int *sortedFalling = bubbleSortFalling(randomArray, 9);
  for (int l = 1; l < 10; l++)
  {
    cout << sortedFalling[l] << ' ';
  }
  
  cout << '\n';

  return 0;
}