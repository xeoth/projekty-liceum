#include <iostream>
using namespace std;

int main() {
	//Deklaracja zmiennych
	float l1, l2;
	
	//Pytanie użytkownika o wartości
	cout << "Podaj pierwsza liczbe rzeczywista" << endl;
	cin >> l1;
	
	cout << "Podaj druga liczbe rzeczywista" << endl;
	cin >> l2;
	
	//Obliczanie wartości bezwzg.
	float bezw1, bezw2;
	if (l1 < 0) {
		bezw1 = l1*(-1);
	} else {
		bezw1 = l1;
	}

	if (l2 < 0) {
		bezw2 = l2*(-1);
	} else {
		bezw2 = l2;
	}
	
	//Ustawianie koleności
	if (bezw1 > bezw2) {
		cout << "Liczby w kolejnosci rosnacej wg. ich wartosci bezwzg." << endl << l2 << ", " << l1 << endl;
	} else {
		cout << "Liczby w kolejnosci rosnacej wg. ich wartosci bezwzg." << endl << l1 << ", " << l2 << endl;
	}

	/* cout << l1 << " " << bezw1 << endl;
	cout << l2 << " " << bezw2 << endl; */
	
	return 0;
}
