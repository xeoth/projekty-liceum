#include <iostream>
using namespace std;

int main() {
	int ile, aktualna = 2;
	
	
	cout << "Podaj liczbe elementow ciagu" << endl;
	cin >> ile;
	
	cout << aktualna << ' ';
	
	for (int i = 2; i <= ile; i++) {
		if (i%2 == 0)
			aktualna += i/2;
		else
			aktualna *= i/2;
			
		cout << aktualna << ' ';
	}
	
	return 0;
}
