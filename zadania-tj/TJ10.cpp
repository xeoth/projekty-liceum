#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    
    int tab1[10], tab2[10];

    for (int i = 0; i < 10; i++)
    {
        tab1[i] = rand()%100+100;
        tab2[i] = rand()%200+299;
    }

    cout << "Wartosci z tab1:" << endl;

    for (int j = 0; j < 10; j++)
    {
        cout << tab1[j] << ' ';
    }

    cout << endl << endl << "Wartosci z tab2:" << endl;

    for (int k = 0; k < 10; k++)
    {
        cout << tab2[k] << ' ';
    }
    
    cout << endl << endl;

    int tab3[20], count;
    for (int l = 0; l < 20; l+=2)
    {
        count = l/2;
        tab3[l] = tab1[count];
        tab3[l+1] = tab2[count];
    }

    cout << "Wartosci z tab3:";

    for (int lines = 0, m = 0; m < 20; m++)
    {
        if (lines%10 == 0)
            cout << endl;
        cout << tab3[m] << ' ';
        lines++;
    }
    
    

    
    return 0;
}