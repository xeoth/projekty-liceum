#include <iostream>
#include <fstream>
#include <map>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
  fstream read, write;
  read.open("galerie.txt", ios::in);
  write.open("wynik4_3.txt", ios::out);

  map<string, list<int>> areas;
  map<string, int> shopTypes;

  for (int i = 0; i < 50; i++)
  {
    read.ignore(1000, ' ');

    string city;
    read >> city;

    for (int ii = 0; ii < 70; ii++)
    {
      int x, y;
      read >> x >> y;

      if (x == 0 || y == 0)
        continue;

      areas[city].push_back(x * y);
    }
  }

  for (auto v : areas)
  {
    int types = 0;

    string city = v.first;

    for (auto &&vv : v.second)
    {
      types++;
      v.second.remove(vv);
    }

    shopTypes[city] = types;
  }

  int maxTypes = 0, minTypes = 100;
  string maxCity, minCity;
  for (auto it = shopTypes.begin(); it != shopTypes.end(); it++)
  {
    string city = it->first;
    int types = it->second;

    if (types > maxTypes)
    {
      maxTypes = types;
      maxCity = city;
    }
    else if (types < minTypes)
    {
      minTypes = types;
      minCity = city;
    }
  }

  write << maxCity << ' ' << maxTypes << '\n'
        << minCity << ' ' << minTypes;

  return 0;
}