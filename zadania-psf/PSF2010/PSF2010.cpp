#include <iostream>
#include <string>
#include <fstream>
using namespace std;

bool isPalindromic(string current) {
	int counter = current.size()-1;

	for (int i = 0; i < current.size(); i++)
	{
		if (current[i] != current[counter])
			return false;
		
		counter--;
	}

	return true;
}

int main() {
  fstream read, write;
  string current;

  read.open("dane.txt", ios::in);
  write.open("zadanie4.txt", ios::out);

  for (int i = 0; i < 1000; i++)
  {
    read >> current;
    if (isPalindromic(current))
      write << current << '\n';
  }
  
  return 0;
}