#include <iostream>
using namespace std;

int main() {
	//Tytuł
	cout << "Kalkulator" << endl;
	
	//Deklaracja zmiennych i pytanie u�ytkownika o wartość
	float liczba1, liczba2, wynik;
	char dzialanie;

	//Pytanie użytkownika o liczby i działanie
	cout << "Podaj wartosc 1" << endl;
	cin >> liczba1;
	cout << "Podaj dzialanie" << endl;
	cin >> dzialanie;
	cout << "Podaj wartosc 2" << endl;
	cin >> liczba2;
	
	//Wykonywanie wskazanego działania
	switch (dzialanie) {
		case '+':
			wynik = liczba1 + liczba2;
			break;
		case '-':
			wynik = liczba1 - liczba2;
			break;
		case '*':
			wynik = liczba1 * liczba2;
			break;
		case '/':
			wynik = liczba1 / liczba2;
			break;
		default:
			cout << "Niepoprawne dzialanie" << endl;
			return 0;
			break;
	}
	cout << "Wynik dzialania " << liczba1 << dzialanie << liczba2 << " to:" << endl << wynik << endl;
	return 0;
}
