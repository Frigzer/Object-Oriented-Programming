#include "TKlasa.h"

int main() {
    TKlasa obiekt;
    TZaprzyja�niona_Klasa obiekt2;

    cout << "Przy pomocy friend class:" << endl;
    obiekt2.metoda(&obiekt);

    cout << endl << "Przy pomocy friend function:" << endl;
    f_Zaprzyja�niona(&obiekt);

    return 0;
}

