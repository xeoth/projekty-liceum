#include <iostream>
using namespace std;

int main() {
	//Deklarujemy zmienną "liczba"
	float liczbaStartowa;

	//Pytamy użytkownika o liczbę
	cout << "Podaj liczbe" << endl;
	cin >> liczbaStartowa;

	/*
	Gdybym chciał, mógłbym użyć abs(liczba) z biblioteki cmath, jednakże ten rozdział dotyczy konstrukcji if/else, więc:
	*/

	//Obliczamy wartość bezwzględną liczby
	float liczbaAbs;
	if (liczbaStartowa < 0) {
		//Jeżeli liczba jest ujemna, mnożymy przez -1
		liczbaAbs = liczbaStartowa * (-1);
	}
	else {
		//Jeżeli jest dodatnia, to zostawiamy tak jak jest
		liczbaAbs = liczbaStartowa;
	}

	//Wyświetlamy użytkownikowi wartość absolutną liczby	
	cout << "Wartosc absolutna liczby " << liczbaStartowa << " to " << liczbaAbs << endl;
    return 0;
}