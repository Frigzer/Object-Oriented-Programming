#include <iostream>
#include <string>

using namespace std;

struct TStruktura {
    string imie;

    TStruktura(string _imie) : imie(_imie) {} 
};

bool operator!(const TStruktura& s) {
    return s.imie.length() > 5;
}

int main() {
    TStruktura tablica[5] = { TStruktura("Tomasz"), TStruktura("Grzegorz"), TStruktura("Aleksandra"), TStruktura("Adam"), TStruktura("Rafa³") };

    for (int i = 0; i < 5; i++) {
        if (!tablica[i]) {
            cout << tablica[i].imie << endl;
        }
    }

    return 0;
}
