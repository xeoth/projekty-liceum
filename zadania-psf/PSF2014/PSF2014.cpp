#include <iostream>
#include <fstream>
using namespace std;

// nwd
int nwd(int a, int b) {
	while (b != 0) {
		int divider = a%b;
		
		a = b;
		b = divider;
	}
	return a;
}

int sumOfDigits(int a) {
	int sum = 0;
	while (a >= 1) {
		sum += a%10;
		a /= 10;
	}
	return sum;
}

int main() {
	fstream write;
	write.open("ZADANIE5.TXT", ios::out);

	// ppkt. a
	{
		fstream read;
		read.open("PARY_LICZB.TXT", ios::in);
		
		int first, second, count = 0;
		for (int i = 0; i < 1000; i++) {
			read >> first;
			read >> second;
			
			if (first%second == 0 || second%first == 0)
				count++;
		}
		
		write << "a " << count << '\n';
		
		read.close();
	}
	
	// ppkt. b
	{
		fstream read;
		read.open("PARY_LICZB.TXT", ios::in);
		
		int first, second, count = 0;
		for (int i = 0; i < 1000; i++) {
			read >> first;
			read >> second;
			
			int currentGCD = nwd(first, second);

			if (currentGCD == 1){
				count++;
			}
		}
		
		write << "b " << count << '\n';
		read.close();
	}
	
	// ppkt. c
	{
		fstream read;
		read.open("PARY_LICZB.TXT", ios::in);
		
		int first, second, count = 0;
		for (int i = 0; i < 1000; i++) {
			read >> first;
			read >> second;
			
			if (sumOfDigits(first) == sumOfDigits(second))
				count++;
		}

		write << "c " << count;
		read.close();
	}
}
