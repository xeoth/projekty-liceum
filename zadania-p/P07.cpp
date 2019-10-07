#include <iostream>
using namespace std;

int main() {
	int liczba, silnia = 1;
	
	do {
		cout << "Podaj liczbe nie wieksza niz 20" << endl;
		cin >> liczba;
	} while (liczba > 20);
	
	for (int i = 1; i <= liczba; i++) {
		silnia*=i;
	}
	
	cout << liczba << "! = " << silnia;
	
	return 0;
}
