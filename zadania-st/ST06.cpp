#include <iostream>
#include <string>

using namespace std;

int main() {
	
	string sentence;
	cout << "Podaj ciag znakow: ";
	getline(cin, sentence);
	
	string backup = sentence;
	
	for (int i = 0; i < sentence.length(); i+=2) {
		sentence[i] = backup[i+1];
		sentence[i+1] = backup[i];
	}
	
	cout << "Twoj ciag znakow po zaszyfrowaniu: " << sentence;
}
