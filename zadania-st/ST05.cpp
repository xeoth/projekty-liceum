#include <iostream>
#include <string>

using namespace std;

int main() {
	
	string sentence;
	cout << "Wpisz ciag znakow: ";
	getline(cin, sentence);
	
	char afterSpace;
	
	for (int i = 0; i < sentence.length(); i++) {
		if (sentence[i] == ' ' && sentence[i+1] != ' ') {
			afterSpace = sentence[i+1];
			break;
		}
	}
	
	if (!afterSpace)
		cout << "Nie ma takiego znaku.";
	else
		cout << "Ten znak to " << afterSpace;
}
