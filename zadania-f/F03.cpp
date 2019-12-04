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

bool sprawdzanieLiczb(int liczba) {
	while (liczba > 0) {
		if (liczba%10 != 7 && liczba%10 != 3) {
			return false;
		}
		liczba /= 10;
	}
	return true;
}


int main() {
	for (int i = 1; i < 1000; i++) {
		if (isPrime(i) == 1 && sprawdzanieLiczb(i) == 1) 
			cout << i << ' ';
	} 
	return 0;
}
