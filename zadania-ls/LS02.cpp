#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
	srand(time(NULL));
	
	int random;
	
	do {
		random = rand()%60;
		cout << random << ' ';
	} while (random < 50);
	
	return 0;
}
