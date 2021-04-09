#include <iostream>
#include <fstream>
#include <map>
#include <string>

using namespace std;

int main()
{
  // miasto : suma powierzchnii
  map<string, int> areas;
  // miasto : liczba galerii
  map<string, int> galleries;

  fstream read, write_a, write_b;
  read.open("galerie.txt", ios::in);
  write_a.open("wynik4_2a.txt", ios::out);
  write_b.open("wynik4_2b.txt", ios::out);

  for (int i = 0; i < 50; i++)
  {
    string city;
    // odrzucamy kod państwa
    read.ignore(1000, ' ');

    read >> city;

    for (int j = 0; j < 70; j++)
    {
      int x, y;
      read >> x >> y;

      if (x == 0 || y == 0)
        continue;

      galleries[city]++;
      areas[city] += x * y;
    }
  }

  string minCity, maxCity;
  int minCityArea = 9999999, maxCityArea = 0;

  for (
      auto it_areas = areas.begin(), it_galleries = galleries.begin();
      it_areas != areas.end() || it_galleries != galleries.end();)
  {
    string city = it_areas->first;

    int area = it_areas->second, galleries = it_galleries->second;

    cout << city << ' ' << area << ' ' << galleries << '\n';
    write_a << city << ' ' << area << ' ' << galleries << '\n';

    if (minCityArea > area)
    {
      minCityArea = area;
      minCity = city;
    }
    else if (maxCityArea < area)
    {
      maxCity = city;
      maxCityArea = area;
    }

    it_areas++;
    it_galleries++;
  }

  cout << '\n'
       << "Miasto z najwieksza powierzchnia: " << maxCity << ", " << maxCityArea << '\n'
       << "Miasto z najmniejsza powierzchnia: " << minCity << ", " << minCityArea << '\n';
  write_b
      << "Miasto z najwieksza powierzchnia: " << maxCity << ", " << maxCityArea << '\n'
      << "Miasto z najmniejsza powierzchnia: " << minCity << ", " << minCityArea << '\n';
}