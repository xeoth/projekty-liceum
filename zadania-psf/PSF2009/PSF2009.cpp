#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

bool isPrime(int num) {
	for (int i = 2; i < num; i++) {
		if (num%i == 0)
			return false;
	}
	
	return true;
}

int main() {
	int current;
	
    fstream read, write;
    
    read.open("liczby.txt", ios::in);
    write.open("zad_5.txt", ios::out);
    
    if (read.bad()) {
    	read.close();
    	return 1;
	}
    	
    for (int i = 0; i < 500; i++) {
    	read >> current;
    	if (sqrt(current) == int(sqrt(current)) && isPrime(sqrt(current))) {
    		write << current << endl;
    		cout << current << endl;
		}
	}
		
	read.close();
    
    return 0;
}
