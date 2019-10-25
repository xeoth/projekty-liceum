#include <iostream>
using namespace std;

int main(){

	int liczba;
	
	do {
		cout << "Podaj liczbe naturalna wieksza od jeden" << endl;
		cin >> liczba;
	} while(liczba < 1);
	
	cout << endl << liczba << " = ";
	
	for(int i = 2; i <= liczba; i++){

		bool isPrime = true;
		
        //sprawdzanie czy i jest pierwsza
		for(int j = 2; j*j <= i; j++){
			if(i%j==0){
				isPrime = false;
				break;
			}
		}
		if(isPrime)
			while(liczba%i == 0){
				cout << i << '*';
				liczba/=i;
			}
	}
    cout << '1';
	
	return 0;
}