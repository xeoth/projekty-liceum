#include <iostream>
using namespace std;

bool czyPierwsza(int podana) {
    bool isPrime = true;
    for (int i = 2; i < podana; i++)
    {
        if (podana%i == 0) 
        {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}


int main() {
    
    return 0;
}