#include <iostream>
using namespace std;

int* bubbleSortRising(int* array, int len) {
  for (int i = 0; i < len; i++)
  {
    for (int j = 0; j < len; j++)
    {
      if (array[j] > array[j+1]) {
        int tempArray = array[j];
        array[j] = array[j+1];
        array[j+1] = tempArray;
      }
    }
  }
  return array;
}

int* bubbleSortFalling(int* array, int len) {
  int sorted = bubbleSortRising(array, len);
  // Odwracanie tabeli
  int counter = 0;
  for (int k = 8; k > 0; k--)
  {
    sortedFalling[counter] = sortedRising[k];
    cout << sortedFalling[counter] << ' ';
    counter++;
  }

  return array;
  
}