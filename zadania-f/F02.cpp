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

int sumaCyfr(int podana) {
    int returnValue = 0, ostatnia;
    while (podana >= 1)
    {
        ostatnia = podana%10;
        returnValue += ostatnia;
        podana /= 10;
    }
    
    return returnValue;
}


int main() {

    return 0;
}