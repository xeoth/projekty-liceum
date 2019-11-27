#include <iostream>
using namespace std;

bool isPrime(int num) {
	for (int i = 2; i < num; i++) {
		if (num%i == 0)
			return false;
	}
	return true;
}

bool check(int num) {
	int last = num%10;
	num /= 10;

	while (num >= 1) {
		if (last%2 == 0 && (num%10)%2 == 0) {
			return false;
		} else if (last%2 != 0 && (num%10)%2 != 0) {
			return false;
		}
        last = num%10;
		num /= 10;
	}
	return true;
}

void checkLengthAndDisplay(int num) {
    int length = 0, backup = num;
    //Sprawdzanie jaką długość ma liczba
    while (backup >= 1) {
        backup /= 10;
        length++;
    }

    //Sprawdzanie, czy należy dodać spację
    if (length == 3) {
        cout << ' ' << num << ' ';
    } else {
        cout << num << ' ';
    }
}

int main() {
    int columns = 0;
    for (int i = 100; i <= 10000; i++) {
        //Wyświetlanie liczb zgodnych z treścią zadania
        if (check(i) && isPrime(i)) {
            //Sprawdzanie czy należy dodać spację i wyświetlanie liczby
            checkLengthAndDisplay(i);

            columns++;

            if (columns == 10) {
                cout << endl;
                columns = 0;
            }
        }
    }
	return 0;
}
