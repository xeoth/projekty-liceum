#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int mostFrequentElement(vector<int> &data)
{
  map<int, int> elements;

  int mostFrequentElement = 0, maxFrequency = 0;

  for (auto v : data)
  {
    int currentFrequency = ++elements[v];

    if (currentFrequency > maxFrequency)
    {
      maxFrequency = currentFrequency;
      mostFrequentElement = v;
    }
  }

  return mostFrequentElement;
}

int main()
{
  fstream readOne, readTwo, readThree;
  vector<int> data;
  readOne.open("dane5-1.txt", ios::in);
  readTwo.open("dane5-2.txt", ios::in);
  readThree.open("dane5-3.txt", ios::in);

  for (int i = 0; i < 20; i++)
  {
    int current;

    readOne >> current;
    data.push_back(current);
  }

  cout << "Najczesciej wystepujacy w dane5-1.txt: " << mostFrequentElement(data) << '\n';

  data.clear();
  for (int ii = 0; ii < 200; ii++)
  {
    int current;

    readTwo >> current;
    data.push_back(current);
  }

  cout << "Najczesciej wystepujacy w dane5-2.txt: " << mostFrequentElement(data) << '\n';

  data.clear();
  for (int j = 0; j < 10000; j++)
  {
    int current;

    readThree >> current;
    data.push_back(current);
  }

  cout << "Najczesciej wystepujacy w dane5-3.txt: " << mostFrequentElement(data) << '\n';

  return 0;
}