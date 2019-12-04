#include <iostream>
using namespace std;

int countGoldenPages(int num) {
    int last, pages = 0, backup;

    for (int i = 10; i <= num; i++) {
        backup = i;

        last = backup%10;
        backup /= 10;

        while (backup >= 1) {
            if (last == 3 && backup % 10 == 1) {
                pages += 2;
            }
            last =  backup % 10;
            backup /= 10;
        }
    }
    return pages;
}


int main() {
    int pages;
    cout << "Podaj liczbe stron ";
    cin >> pages;
    cout << endl;

    cout << "Liczba stron wydrukowanych na zloto: " << countGoldenPages(pages);

    return 0;
}