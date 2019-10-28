#include <iostream>
using namespace std;


int main() {
	int ileGwiazdek;
	
	do {
		cout << "Podaj liczbe z zakresu 1-20" << endl;
		cin >> ileGwiazdek;
	} while (ileGwiazdek > 20 || ileGwiazdek < 1);
	
	
	for (int i = 0; i < ileGwiazdek; i++) {
		for (int j = 0; j < ileGwiazdek*2; j++) {
			if (j >= ileGwiazdek-i && j <= ileGwiazdek+i) {
				cout << "* ";
			} else {
				cout << "  ";
			}
		}
		cout << endl;
	}
	return 0;
}
