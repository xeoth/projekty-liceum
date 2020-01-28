template <class T>
// Napisana dla różnych typów zmiennych
void bubbleSortRising(T array[], size_t size) {
  for (size_t i = size; i > 0; i--)
  {
    for (size_t j = 0; j < i-1; j++)
    {
      if (array[j] > array[j+1]) {
        T t = array[j];
        array[j] = array[j+1];
        array[j+1] = t;
      }
    } 
  } 
}

template <class T>
void bubbleSortFalling(T array[], size_t size) {
  for (size_t i = size; i > 0; i--)
  {
    for (size_t j = 0; j < i-1; j++)
    {
      if (array[j] < array[j+1]) {
        T t = array[j];
        array[j] = array[j+1];
        array[j+1] = t;
      }
    } 
  } 
}