#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

class Rownanie_kwadratowe {

    double a, b, c, x1, x2;

public:

    void Czytaj_dane() {
        cout << "Podaj parametr a ";
        cin >> a;
        cout << "Podaj parametr b ";
        cin >> b;
        cout << "Podaj wyraz wolny c ";
        cin >> c;
        if (a == 0) {
            x1 = -(b / c);
            cout << "Jedno rozwiazanie: x = " << x1;
            exit(0);
        }
    }

    void Przetworz_dane() {
        double delta = (b * b) - (4 * a * c);
        int pom;
        if (delta > 0) {
            pom = 1;
        }
        else if (delta < 0) {
            pom = 2;
        }
        else {
            pom = 3;
        }
        switch (pom) {
        case 1:
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            break;
        case 2:
            cout << "Delta ujemna, dwa rozwiazania zespolone\n";
            break;
            exit(0);
        case 3:

            x1 = (-b + sqrt(delta)) / (2 * a);
            break;
        }
 
    }
    void Wyswietl_wynik() {
        if ((b * b) - (4 * a * c) == 0) {
            cout << "Jedno rozwiazanie: " << x1;
        }
        else {
            cout << "Dwa rozwiazania: " << x1 << ", " << x2;
        }
    }

};

int main() {
    
    Rownanie_kwadratowe kwadrat;
    kwadrat.Czytaj_dane();
    kwadrat.Przetworz_dane();
    kwadrat.Wyswietl_wynik();
    return 0;
}