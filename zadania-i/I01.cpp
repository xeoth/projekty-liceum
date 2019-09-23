#include <iostream>
using namespace std;

int main() {
	//Deklarujemy zmienn¹ "liczba"
	float liczba;

	//Pytamy u¿ytkownika o liczbê
	cout << "Podaj liczbe";
	cin >> liczbaStartowa;

	/*
	Gdybym chcia³, móg³bym u¿yæ abs(liczba) z biblioteki cmath, jednak¿e ten rozdzia³ dotyczy konstrukcji if/else, wiêc:
	*/

	//Obliczamy wartoœæ bezwzglêdn¹ liczby
	float liczbaAbs
	if (liczba < 0) {
		//Je¿eli liczba jest ujemna, mno¿ymy przez -1
		liczbaAbs = liczba * (-1);
	}
	else {
		//Je¿eli jest dodatnia, to zostawiamy tak jak jest
		liczbaAbs = liczba;
	}

	//Wyœwietlamy u¿ytkownikowi wartoœæ absolutn¹ liczby	
	cout << "Wartosc absolutna liczby " << liczba << " to " << liczbaAbs;
    return 0;
}