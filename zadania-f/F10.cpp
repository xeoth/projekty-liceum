#include <iostream>
using namespace std;

bool isPrime(int num) {
    for (int i = 2; i < num; i++) {
        if (num%i == 0)
            return false;
    }
    return true;
}

int firstDigit(int num) {
    while (num >= 10) {
        num /= 10;
    }
    return num;
}

int lastDigit(int num) {
    return num%10;
}

int main() {
    for (int i = 10; i <= 1000; i++) {
        if (isPrime(i) && lastDigit(i) == firstDigit(i))
            cout << i << ' ';
    }
    return 0;
}