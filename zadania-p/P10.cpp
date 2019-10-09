#include <iostream>
using namespace std;

//TODO dodac komentarze

int main() {
	//dek zm.
	int num;
	bool isPrime = true;
	
	//pytanie u¿. o wart.
	cout << "Podaj liczbe" << endl;
	cin >> num;
	
	for (int i = 2; i < num; i++) {
		if (num%i == 0) {
			isPrime = false;
			break;
		}
	}
	
	if (isPrime)
		cout << "Liczba " << num << " jest liczba pierwsza." << endl;
	else
		cout << "Liczba " << num << " nie jest liczba pierwsza" << endl;
	
	return 0;
}
