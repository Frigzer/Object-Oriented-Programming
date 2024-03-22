#include <iostream>
using namespace std;

struct T_data {

    int dzien, miesiac, rok;


    T_data Pobierz_date();

    static void Wypisz_date(T_data a) {
        if (a.dzien <= 9) {
            cout << "Dzien urodzenia to: 0" << a.dzien << endl;
        }
        else {
            cout << "Dzien urodzenia to: " << a.dzien << endl;
        }
        if (a.miesiac <= 9) {
            cout << "Miesiac urodzenia to: 0" << a.miesiac << endl;
        }
        else {
            cout << "Miesiac urodzenia to: " << a.miesiac << endl;
        }
        cout << "Rok urodzenia to: " << a.rok;
    };
};

T_data Pobierz_date(T_data* z) {
    int a, b, c;
    cout << "Podaj dzien urodzin: ";
    cin >> a;
    z->dzien = a;
    cout << "Podaj miesiac urodzin: ";
    cin >> b;
    z->miesiac = b;
    cout << "Podaj rok urodzenia: ";
    cin >> c;
    z->rok = c;
    return *z;
}


int main() {
    T_data a;
    Pobierz_date(&a);
    T_data::Wypisz_date(a);
    //cout<<a.dzien<<endl;
    //cout<<a.miesiac<<endl;
    //cout<<a.rok<<endl;
}
