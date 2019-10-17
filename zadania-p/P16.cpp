#include <iostream>
using namespace std;

int main() {

    int ileElementow;
    unsigned long long pierwszy = 0, drugi = 1, aktualny;

    do
    {
        cout << "Podaj liczbe elementow ciagu" << endl;
        cin >> ileElementow;
    } while (ileElementow > 70 || ileElementow < 2);

    cout << endl << "1 " << pierwszy << endl << "2 " << drugi << endl;

    for (int i = 0; i < ileElementow - 2; i++)
    {
        aktualny = pierwszy + drugi;
        cout << i + 3 << ' ' << aktualny << endl;
        pierwszy = drugi;
        drugi = aktualny;
    }
    
    return 0;
}