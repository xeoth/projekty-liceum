#include <iostream>
using namespace std;

bool isPrime(int liczba) {
	for (int i = 2; i < liczba; i++) {
		if (liczba%i == 0)
			return false;
	}
	return true;
}



bool isPalindromic(int liczba){
	int backwards=0, x = liczba;
	while(liczba > 0){
		backwards = backwards*10+liczba%10;
		liczba /= 10;
	}
	if(backwards == x)
		return true;
	else
		return false;
}

int main(){
	for(int i=10;i<=1000;i++)
		if(isPrime(i) && isPalindromic(i))
			cout << i << ' ';
	
	return 0;
}

