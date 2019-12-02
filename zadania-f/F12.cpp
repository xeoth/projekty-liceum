#include <iostream>
using namespace std;

bool isPrime(int num) {
    for (int i = 2; i < num; i++) {
        if (num%i == 0)
            return false;
    }
    return true;
}

bool checkNumber(int num) {
    int backup = num;

    while (num >= 1) {
        int last = num%10;
        num /= 10;
        backup = num;
        while (backup >= 1) {
            if (backup % 10 == last)
                return true;
            backup /= 10;
        }
    }

    return false;
}

int main() {
    int j = 0;

    for (int i = 1000; i <= 2000; i++) {
        if (isPrime(i) && checkNumber(i)) {
            cout << i << ' ';
            j++;
            if (j == 10) {
                cout << endl;
                j = 0;
            }
        }
    }

    return 0;
}