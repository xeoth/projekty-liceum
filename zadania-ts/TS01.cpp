#include <iostream>
#include <cstdlib>
#include <ctime>
#include "bubblesort.hpp" // dołączenie pliku bubblesort.hpp w którym znajduje się algorytm sortowania bąbelkowego
using namespace std;

int main() {
  // Ustawienie seeda na czas
  srand(time(NULL));

  cout << "Tablica pseudolosowych\n";
  // Tworzenie i uzupełnienie tabeli
  int randomArray[10];
  for (int i = 0; i < 9; i++)
  {
    randomArray[i] = rand()%90+10;
    cout << randomArray[i] << ' ';
  }

  cout << '\n';

  cout << "Posortowana rosnaco\n";
  bubbleSortRising(randomArray, 10);

  for (int j = 0; j < 9; j++)
  {
    cout << randomArray[j] << ' ';
  }

  cout << "\nPosortowana malejaco\n";

  bubbleSortFalling(randomArray, 10);
  for (int k = 1; k < 10; k++)
  {
    cout << randomArray[k] << ' ';
  }
  
  
  return 0;
}