#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	// Set starting point to time
	srand(time(NULL));
	
	int randomArray[10];
	
	// Writing pseudorandom numbers into the array
	for (int i = 0; i < 10; i++) {
		randomArray[i] = rand()%100;
	}
	
	// Reading values from the array
	cout << "Wartosci poczatkowe:" << endl;
	
	for (int j = 0; j < 10; j++) {
		cout << randomArray[j] << ' ';
	}
	
	cout << endl;
	
	// Reordering numbers in the array and writing them to another array
	int reorder[10], counter = 0;
	for (int k = 9; k >= 0; k--) {
		reorder[counter] = randomArray[k];
		counter++;
	} 
	
	// Writing from reorder[] to randomArray[]
	
	for (int l = 0; l < 10; l++) {
		randomArray[l] = reorder[l];
	}
	
	//Reading from randomArray[]
	cout << "Wartosci koncowe:" << endl;
	
	for (int m = 0; m < 10; m++) {
		cout << randomArray[m] << ' ';
	}
	
	return 0;
}
