#include <iostream>
#include <fstream>
#include <string>
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
	
	fstream wynik4a, wynik4b, wynik4c;
	
	// Otwieranie plik�w z wynikami
	wynik4a.open("wynik4a.txt", ios::out);
	wynik4b.open("wynik4b.txt", ios::out);
	wynik4c.open("wynik4c.txt", ios::out);
	
	// Sprawdzanie poprawno�ci
	if (wynik4a.bad() || wynik4b.bad() || wynik4c.bad())
		return 1;
	
	// Zadanie 4A
	{
		// Otwieranie pliku z has�ami
		fstream read;
		read.open("hasla.txt", ios::in);

		string current;
		int even = 0;
		for (int i = 0; i < 200; i++) {
			read >> current;
		
			if (current.length()%2 == 0) 
				even++;
		}
		wynik4a << "Parzyste: " << even << endl;
		wynik4a << "Nieparzyste: " << 200-even << endl;
	}

	// Zadanie 4B
	{
		// Otwieranie pliku z has�ami
		fstream read;
		read.open("hasla.txt", ios::in);

		string current;

		for (int i = 0; i < 200; i++) {
			read >> current;

			if (isPalindromic(current))
				wynik4b << current << endl;
		}
	}

}
