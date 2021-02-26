#include <iostream>
#include <fstream>
#include <vector>
#include <climits>
using namespace std;

int algo(vector<int> data)
{
  int max = INT_MIN, maxLocal = 0;

  for (auto &&v : data)
  {
    maxLocal = maxLocal + v;

    if (max < maxLocal)
    {
      max = maxLocal;
    }
    if (maxLocal < 0)
    {
      maxLocal = 0;
    }
  }

  return max;
}

int main()
{
  int max = 0, maxLocal = 0;

  fstream readOne, readTwo, readThree;
  vector<int> dataOne, dataTwo, dataThree;

  readOne.open("dane5-1.txt", ios::in);
  vector<int> data;
  for (int i = 0; i < 20; i++)
  {
    int current;

    readOne >> current;
    data.push_back(current);
  }
  cout << "W dane5-1.txt: " << algo(data) << '\n';

  readTwo.open("dane5-2.txt", ios::in);
  data.clear();
  for (int ii = 0; ii < 200; ii++)
  {
    int current;

    readTwo >> current;
    data.push_back(current);
  }
  cout << "W dane5-2.txt: " << algo(data) << '\n';

  readThree.open("dane5-3.txt", ios::in);
  data.clear();
  for (int j = 0; j < 10000; j++)
  {
    int current;

    readThree >> current;
    data.push_back(current);
  }
  cout << "W dane5-3.txt: " << algo(data) << '\n';

  return 0;
}