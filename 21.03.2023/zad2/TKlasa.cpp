#include "TKlasa.h"

void f_Zaprzyjaźniona(TKlasa* obiekt) {
    int newval;
    cout << "Pierwotna wartosc: " << obiekt->wartosc << endl;
    cout << "Podaj nowa wartosc ";
    cin >> newval;
    obiekt->wartosc = newval;
    cout << "Nowa wartosc: " << obiekt->wartosc << endl;
}
