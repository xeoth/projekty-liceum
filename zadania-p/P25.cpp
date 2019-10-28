#include <iostream>
using namespace std;


int main() {
	int przyprostokatna, aktualna;
	
	do {
		cout << "Podaj dlugosc przyprostokatnej" << endl;
		cin >> przyprostokatna;
	} while (przyprostokatna > 20);
	
	for (int i = 1; i <= przyprostokatna; i++) {
		for (int j = 0; j <= aktualna; j++) {
			cout << "* ";
		}
		cout << endl;
		aktualna++;
	}
	
	return 0;
}
