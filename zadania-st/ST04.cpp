#include <iostream>
#include <string>

using namespace std;

int main() {
	
	string sentence;
	cout << "Podaj ciag znakow: ";
	getline(cin, sentence);
	
	int digits = 0, letters = 0;
	
	for (int i = 0; i < sentence.length(); i++)
		(int)sentence[i] >= 48 && (int)sentence[i] <= 57 ? digits++ : letters++;
	
	
	cout << "Liczba cyfr w tym ciagu znakow: " << digits << "\nLiczba innych znakow w tym ciagu znakow: " << letters;
}
