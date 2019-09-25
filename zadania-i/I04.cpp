#include <iostream>
using namespace std;

int main() {
	//Kod z zadania Z02
	
	//Pytamy użytkownika o jego wagę oraz wzrost
    float waga;
    float wzrost;
    cout << "Podaj swoja wage (wyrazona w kilogramach)" << endl;
    cin >> waga;
    cout << "Podaj swoj wzrost (wyrazony w centymetrach)" << endl;
    cin >> wzrost;
    //Obliczamy BMI ze wzoru BMI = waga/wzrost*wzrost
    float bmi;
    bmi=waga/(wzrost/100 * wzrost/100);
    //Wyświetlamy użytkownikowi jego indeks BMI
    cout << "Twoja wartosc BMI to " << bmi << endl;
    
    //Kod kt�ry napisa�em teraz
    if (bmi < 18) {
    	cout << "Niedowaga" << endl;
	} else if (bmi >= 18 && bmi <= 24) {
		cout << "Norma" << endl;
	} else if (bmi > 24 && bmi <= 29) {
		cout << "Nadwaga" << endl;
	} else if (bmi > 29 && bmi <= 39) {
		cout << "Otylosc" << endl;
	} else if (bmi > 39) {
		cout << "Powazna nadwaga" << endl;
	}
	return 0;
}
