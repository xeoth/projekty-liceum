#include <iostream>
using namespace std;

int main() {
	//deklaracja zmiennych
	int liczba;
	unsigned long long silnia = 1; //unsigned long long bo potrzeba przechować wartość większą niż int
	
	//odbieranie wartości o użytkownika
	do {
		cout << "Podaj liczbe nie wieksza niz 20" << endl;
		cin >> liczba;
	} while (liczba > 20);
	
	//obliczanie silni
	for (int i = 1; i <= liczba; i++) {
		silnia*=i;
	}
	
	//wyświetlanie wyniku
	cout << liczba << "! = " << silnia;
	
	return 0;
}
