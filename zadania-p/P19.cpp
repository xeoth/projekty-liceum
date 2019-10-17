#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Ciag poteg" << endl << endl;

    for (int i = 1; i < 10; i++)
    {
        unsigned long potega = pow(i, i);
        cout << potega << ' ';
    }
    
    return 0;
}