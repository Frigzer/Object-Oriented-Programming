#include "TKlasa.h"

int main() {
    TKlasa obiekt;
    TZaprzyjaüniona_Klasa obiekt2;

    cout << "Przy pomocy friend class:" << endl;
    obiekt2.metoda(&obiekt);

    cout << endl << "Przy pomocy friend function:" << endl;
    f_Zaprzyjaüniona(&obiekt);

    return 0;
}

