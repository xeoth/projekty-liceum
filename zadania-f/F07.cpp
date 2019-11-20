#include <iostream>
using namespace std;

bool isPrime(int liczba) {
	for (int i = 2; i < liczba; i++) {
		if (liczba%i == 0)
			return false;
	}
	return true;
}

int sumaCyfr(int liczba) {
	if(liczba > 0)
		return liczba%10 + sumaCyfr(liczba/10);
	return 0;
}

int ileCyfr(int liczba) {
	int ile = 1;
	while((liczba /= 10) > 0)
		ile++;
	return ile;	
}

int potega(int podstawa, int wykladnik) {
	if (wykladnik == 0)
		return 1;
	else
		return podstawa *= potega(podstawa, --wykladnik);
}

int main() {
	for(int i = 2; i < 10000; i++)
		if(isPrime(i) and sumaCyfr(i) == potega(2, ileCyfr(i)))
			cout << i << ' ';
	
	return 0;
}

