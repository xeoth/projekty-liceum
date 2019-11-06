#include <iostream>
using namespace std;


bool isPrime(int liczba) {
	for (int i = 2; i < liczba; i++) {
		if (liczba%i == 0)
			return false;
	}
	return true;
}

bool doesNotContain(int liczba, int shouldNotContain) {
	while (liczba >= 1) {
		if (liczba%10 == shouldNotContain) 
			return false;
		liczba /= 10;
	}
	return true;
}

bool containsExactly(int liczba, int howMany, int ofWhich) {
	int suma = 0;
	while (liczba >= 1) {
		if (liczba%10 == ofWhich)
			suma++;
		liczba /= 10;
	}
	if (suma == howMany)
		return true;
	else
		return false;
}

int main() {
	int shouldNotContain, howMany, ofWhich, liczba;
	
	cout << "Podaj cyfre ktora ma wystapic" << endl;
	cin >> ofWhich;
	cout << "Podaj ile razy ma wystapic" << endl;
	cin >> howMany;
	cout << "Podaj cyfre ktorej nie ma byc w badanych liczbach" << endl;
	cin >> shouldNotContain;
	
	if (shouldNotContain == ofWhich) {
		cout << "Wartosci podane wykluczaja sie";
		return 0;
	} else if (howMany < 1) {
		cout << "Podana wartosc jest nieprawidlowa";
	}
	
	cout << "Liczby z zakresu 2 - 10 000 spelniajace podane warunki" << endl;
	
	for (int i = 2; i <= 10000; i++) {
		if (isPrime(i) && doesNotContain(i, shouldNotContain) && containsExactly(i, howMany, ofWhich))
			cout << i << ' ';
	}
	
	return 0;
}
