#include "TKlasa.h"

int main() {
    TKlasa obiekt;
    TZaprzyjaźniona_Klasa obiekt2;

    cout << "Przy pomocy friend class:" << endl;
    obiekt2.metoda(&obiekt);

    cout << endl << "Przy pomocy friend function:" << endl;
    f_Zaprzyjaźniona(&obiekt);

    return 0;
}

