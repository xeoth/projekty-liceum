#include <iostream>
using namespace std;

bool isPrime(int liczba) {
	if (liczba < 2)
		return false;
	for (int i = 2; i*i <= liczba; i++)
		if(liczba%i == 0)
			return false;
	return true;
}

int howManyDigits(int liczba, int cyfra) {
	int suma = 0;
	while (liczba > 0) {
		if (liczba%10 == cyfra)
			suma++;
		liczba /= 10;
	}
	return suma;
}

int main() {
	for (int i = 0; i < 10; i++){
		int suma = 0;
		for(int j = 0; j <= 1000; j++)
			if(isPrime(j))
				suma += howManyDigits(j,i);
		cout << "Cyfra " << i << " wystepuje " << suma << " razy"<< endl;
	}
	
	return 0;
}


