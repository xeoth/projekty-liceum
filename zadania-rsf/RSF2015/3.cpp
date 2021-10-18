#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <vector>

using namespace std;

int three()
{
  fstream read, write;
  read.open("slowa.txt", ios::in);
  write.open("wyniki4.txt", ios::app);
  vector<string> viableWords;
  int maxSequenceLen = 0;

  for (int i = 0; i < 1000; i++)
  {
    string current;
    read >> current;

    int currentSequenceLen = 1;

    for (int i = 0; i < current.size(); i++)
    {

      if (current[i] != '0')
      {
        currentSequenceLen = 1;
        continue;
      }
      else if (i == current.size() - 1)
        break;

      if (current[i] == current[i + 1])
        currentSequenceLen++;

      if (currentSequenceLen == maxSequenceLen)
        viableWords.push_back(current);
      else if (currentSequenceLen > maxSequenceLen)
      {
        viableWords.clear();
        viableWords.push_back(current);
        maxSequenceLen = currentSequenceLen;
      }
    }
  }

  viableWords.erase(viableWords.begin());

  write
      << "3. Dlugosc najdluzszego bloku: " << maxSequenceLen << '\n'
      << "Slowa ktore zawieraja taki blok:" << '\n';

  cout
      << "3. Dlugosc najdluzszego bloku: " << maxSequenceLen << '\n'
      << "Slowa ktore zawieraja taki blok:" << '\n';

  for (auto v : viableWords)
  {
    write << v << '\n';
    cout << v << '\n';
  }
}