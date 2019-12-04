#include <iostream>
using namespace std;

bool isPrime(int liczba) {
	for (int i = 2; i < liczba; i++) {
		if (liczba%i == 0)
			return false;
	}
	return true;

}


//Trzeba by³o rekurencyjnie... po co?
//int sumOfDigits(int liczba) {
//	int sum = 0;
//	while (liczba >= 1) {
//		sum += liczba%10;
//		liczba /= 10;
//	}
//	return sum;
//}

int sumOfDigits(int liczba) {
	if (liczba > 0)
		return liczba%10 + sumOfDigits(liczba/10);
	return 0;
}

int howManyDigits(int liczba) {
	int digitCount = 0;
	while (liczba >= 1) {
		digitCount++;
		liczba /= 10;
	}
	return digitCount;
}

int main() {
	int everyTenLines = 0;
	for (int i = 1; i <= 5000; i++) {
		if (isPrime(i) && sumOfDigits(i)%howManyDigits(i) == 0) {
			int backup = i;
			while (backup < 9999) {
				cout << ' ';
				backup *= 10;
			}
			
			cout << i << ' ';
			
			everyTenLines++;
			if (everyTenLines%10 == 0)
				cout << endl;
		}
	}
	return 0;
}
