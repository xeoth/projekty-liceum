#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int g_computerPoints = 0, g_userPoints = 0; //zmienne globalne

void round(int roundNo) {
	int userNumber, computerNumber = rand()%3+1;
	cout << "-----" << "RUNDA " << roundNo << "-----";
	cout << endl;
	
	cout << "Podaj liczbe z zakresu 1-3: ";
	cin >> userNumber;

	if (userNumber < 1 || userNumber > 3)
		exit(0);
	
	if (userNumber == computerNumber) {
        g_userPoints++;
		cout << "Wygrales!" << endl << "Twoje punkty: " << g_userPoints << endl << "Punkty komputera: " << g_computerPoints << endl;
	}
	else {
		g_computerPoints++;
		cout << "Przegrales :(" << endl << "Twoje punkty: " << g_userPoints << endl << "Punkty komputera: " << g_computerPoints << endl;
	}

	cout << endl;
}

int main() {

    setlocale(LC_ALL, "pl_PL.UTF-8");

    /*
     * Niektóre znaki w tym pliku mogą być niepoprawnie wyświetlane w systemie Windows
     * Aby temu zaradzić, należy wpisać "chcp 65001" w Wiersz Polecenia przed uruchomieniem programu
     */

	srand(time(NULL));
	char nextRound;
	int roundNo = 1;
	
	do {
		round(roundNo);
		cout << "Czy chcesz grac dalej? (t/n): ";
		cin >> nextRound;
		roundNo++;
	} while(nextRound == 't');

	cout << endl << endl;


	cout << "┌──────FINALNY WYNIK──────┐" << endl;
	cout << "│           Ty:           │" << endl;
	cout << "│            " << g_userPoints << "            │" << endl;
	cout << "├─────────────────────────┤" << endl;
	cout << "│         Komputer:       │"  << endl;
	cout << "│            " << g_computerPoints << "            │" << endl;
	cout << "└─────────────────────────┘" << endl << endl;

	cout << "Dziekuje za gre!";
	
	return 0;
}
