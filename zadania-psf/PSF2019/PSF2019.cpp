#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// prościej pewnie byłoby bez klas,
// ale mam więcej czasu bo jest koronawirus
// więc zrobimy tak
class Pesel {
    string pesel;

    public:
        void setPesel(string current) {
            pesel = current;
        }

        int getMonth(void) {
            // 3 i 4 liczba = miesiąc
            int fullMonth = ((pesel[2]-48)*10+(pesel[3]-48));

            if (fullMonth > 12)
                fullMonth -= 20;

            return fullMonth;
        }

        bool getGender(void) {
            // kobiety
            if (int(pesel[9])%2 == 0)
                return false;
            // mężczyźni
            else
                return true;
        }

        bool isValid(void) {
            if ((pesel[0] + 3*pesel[1] + 7*pesel[2] + 9*pesel[3] + pesel[4] + 3*pesel[5] + 7*pesel[6] + 9*pesel[7] + pesel[8] + 3*pesel[9] + pesel[10])%10 == 0)
                return true;
            else
                return false;
        }
};

int main() {

    fstream write;
    write.open("wyniki6.txt", ios::out);
    
    // ppkt. 1
    {
        fstream read;
        read.open("dane.txt", ios::in);

        int male = 0, female = 0;
        for (int i = 0; i < 1000; i++)
        {
            string current;
            read >> current;

            Pesel currentClass;

            currentClass.setPesel(current);

            if (currentClass.getGender())
                male++;
            else
                female++;
        }

        write << "6.1\n---\n" << "Mężczyźni: " << male << "\nKobiety: " << female << "\n\n";
        
    }

    // ppkt. 2
    {
        fstream read;
        read.open("dane.txt", ios::in);

        write << "6.2\n---\n";

        int countNovember = 0;
        for (int i = 0; i < 1000; i++)
        {
            string current;
            read >> current;

            Pesel currentClass;
            currentClass.setPesel(current);

            int month = currentClass.getMonth();

            if (month == 11)
                countNovember++;
        }

        write << "Ilość osób urodzonych w listopadzie: " << countNovember << "\n\n";
        
    }

    // ppkt. 3
    {
        fstream read;
        read.open("dane.txt", ios::in);

        write << "6.3\n---\n";

        for (int i = 0; i < 1000; i++)
        {
            string current;
            read >> current;

            Pesel currentClass;
            currentClass.setPesel(current);

            if (!currentClass.isValid())
                write << current << '\n';
        }
        

    }

    return 0;
}