#include <iostream>
using namespace std;

int main() {
	cout << "Kwadrat 10x10" << endl;
	
	for (int i = 0; i <= 10; i++) {
		for (int j = 0; j <= 10; j++) {
			cout << "* ";
		}
		cout << endl;
	}
	
	return 0;
}
