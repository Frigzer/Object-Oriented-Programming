#include "TZaprzyjaźniona_Klasa.h"

void TZaprzyjaźniona_Klasa::metoda(TKlasa* obiekt)
{
    int newval;
    cout << "Pierwotna wartosc: " << obiekt->wartosc << endl;
    cout << "Podaj nowa wartosc ";
    cin >> newval;
    obiekt->wartosc = newval;
    cout << "Nowa wartosc: " << obiekt->wartosc << endl;
}
