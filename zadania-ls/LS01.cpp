#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {
	srand(time(NULL));
	
	for (int i = 100; i < 200; i++) {
		cout << rand()%101 + 100 << ' ';
	}
	
	return 0;
}
