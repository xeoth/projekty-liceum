#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
	
	string sentence;
	cout << "Podaj ciag znakow: ";
	getline(cin, sentence);
	
	if (sentence.length()%2 == 0)
		cout << "Nie ma srodkowego znaku.";
	else
		cout << "Srodkowy znak: " << sentence[ceil(sentence.length()/2)];
}
