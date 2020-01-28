#include <iostream>
using namespace std;

int main() {
    int firstInColumn = 36, column = 0, iterations = 0;

    for (int i = 36; i < 253; i++)
    {   
        int current = firstInColumn+(31*column);
        if (current < 100)
            cout << ' ';
        cout << current << " - " << (char)current;

        cout << "   ";

        if (++column >= 7) {
            cout << '\n';
            column = 0;
            iterations++;
            firstInColumn = 36+iterations;
        }
    }
    
    return 0;
}