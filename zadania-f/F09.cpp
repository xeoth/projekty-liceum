#include <iostream>
using namespace std;

bool isFirstDigitPrime(int liczba) {
//	while (liczba >= 10) {
//		if (liczba%2 == 0)
//			return false;
//		liczba /= 10;
//	}
//	
//	if (liczba%2 != 0)
//		return false;
//		
//	return true;

	while (liczba >= 10) {
		for (int i = 0; i < liczba; i++) {
			if (liczba%i == 0)
				return false;
		}
	}
}


int main() {
	cout << isFirstDigitPrime(656);
	
	return 0;
}
