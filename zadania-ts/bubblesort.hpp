#include <iostream>
using namespace std;

/**
 * @param array Array of randomized numbers
 * @param len Length of the array given on initialization
 * @return Array of sorted numbers, from the lowest to highest
*/
int* bubbleSortRising(int* array, const int len) {
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

/**
 * @param array Array of randomized numbers
 * @param len Length of the array given on initialization
 * @return Array of sorted numbers, from the highest to the lowest
 */
int* bubbleSortFalling(int* array, const int len) {
  for (int i = 0; i < len; i++)
  {
    for (int j = 0; j < len; j++)
    {
      if (array[j] < array[j+1]) {
        int tempArray = array[j];
        array[j] = array[j+1];
        array[j+1] = tempArray;
      }
    }
  }
  return array;
  
}