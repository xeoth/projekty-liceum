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

  cout << endl;

  cout << "Posortowana rosnaco" << endl;
  int *sortedRising = bubbleSort(randomArray, 9);
  for (int k = 0; k < 9; k++)
  {
    cout << sortedRising[k] << ' ';
  }

  cout << endl;

  cout << "Posortowana malejaco" << endl;
  int sortedFalling[9], counter = 0;
  for (int l = 8; l > 0; l--)
  {
    sortedFalling[counter] = sortedRising[l];
    cout << sortedFalling[counter] << ' ';
    counter++;
  }

  return 0;
}