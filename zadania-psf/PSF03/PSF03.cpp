#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	
	fstream read, wynik4a, wynik4b, wynik4c;
	
	// Otwieranie pliku z has³ami
	read.open("hasla.txt", ios::in);
	
	// Otwieranie plików z wynikami
	wynik4a.open("wynik4a.txt", ios::out);
	wynik4b.open("wynik4b.txt", ios::out);
	wynik4c.open("wynik4c.txt", ios::out);
	
	// Sprawdzanie poprawnoœci
	if (read.bad() || wynik4a.bad() || wynik4b.bad() || wynik4c.bad())
		return 1;
	
	// Zadanie 4A
	{
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
	
}
