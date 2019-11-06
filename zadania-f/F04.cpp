#include <iostream>
using namespace std;

bool isPrime(int liczba) {
	for (int i = 2; i*i <= liczba; i++) {
		if (liczba%i == 0) {
			return false;
		}
	}
	return true;
}

bool czyRosnaco(int liczba) {
	int poprzednia = 0;
	while (liczba > 1) {
		cout << "Liczba: " << liczba << endl;
		cout << "Ostatnia: " << liczba%10 << endl;
		if (liczba%10 > poprzednia) {
			return false;
		}
		poprzednia = liczba%10;
		liczba /= 10;
	}
	return true;
}

int main() {
	cout << czyRosnaco(123);
	return 0;
}
