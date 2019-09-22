#include <iostream>
using namespace std;

int main() {
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
    return 0;
}