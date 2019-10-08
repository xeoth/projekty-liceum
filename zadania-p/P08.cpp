#include <iostream>
using namespace std;

int main() {
	int liczba, ostatnia, iloczyn = 1, suma = 0;
	
	cout << "Podaj liczbe naturalna" << endl;
	cin >> liczba;
	
	if (liczba < 0) {
		cout << "Wprowadzona liczba nie jest liczba naturalna" << endl;
		return 0;
	}
	
	while (liczba > 0) {
		ostatnia = liczba%10;
		suma+=ostatnia;
		iloczyn*=ostatnia;
		liczba/=10;
	}
	
	cout << "Suma: " << suma << endl;
	cout << "Iloczyn: " << iloczyn << endl;
	
	
	
	return 0;
}
