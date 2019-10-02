#include <iostream>
using namespace std;

int main() {
	//deklaracja zmiennych i pytanie uzytkownika o wartosci
	int lewy, prawy;
	cout << "Podaj lewy koniec przedzialu" << endl;
	cin >> lewy;
	cout << "Podaj prawy koniec przedzialu" << endl;
	cin >> prawy;
	
	//Sprawdzanie ktory koniec jest wiekszy
	if (lewy > prawy) {
		for (int i=prawy; i<=lewy; i++) {
			if (i%4 == 3) {
				cout << i << ' ';
			}
		}
	} else {
		for (int i=lewy; i<=prawy; i++) {
			if (i%4 == 3) {
				cout << i << ' ';
			}
		}
	}
	
	return 0;
}
