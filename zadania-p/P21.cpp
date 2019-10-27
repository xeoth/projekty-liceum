#include <iostream>
using namespace std;

int main() {
	int liczba;
	
	while (liczba < 1 || liczba > 9) {
		cout << "Podaj liczbe z zakresu 1-9" << endl;
		cin >> liczba;
	}
	
	for (int i = 1; i <= liczba; i++) {
		for (int j = 1; j <= i; j++) {
			cout << i;
		}
		cout << ' ';
	}
	
	return 0;
}
