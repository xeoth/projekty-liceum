#include <iostream>
using namespace std;

int main() {
	cout << "Kwadrat 10x10" << endl << ' ';
	
	int liczba = 0;

	for (int i = 0; i <= 8; i++) {
		for (int j = 0; j <= 9; j++) {
			if (liczba < 10) {
				cout << liczba << "  ";
			}
			else
				cout << liczba << " ";
			liczba++;
		}
		cout << endl;
		
	}
	
	return 0;
}
