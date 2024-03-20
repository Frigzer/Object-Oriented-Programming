#include <iostream>
#include <string>

using namespace std;

class TOsoba {
public:
    string imie;
    const int wiek;
    const int wzrost;

    TOsoba(string im, int w, int wz) : wiek(w), wzrost(wz) {
        this->imie = im;
    }

};

void wypiszOsobe(const TOsoba& osoba) {
    cout << "Imie: " << osoba.imie << endl;
    cout << "Wiek: " << osoba.wiek << endl;
    cout << "Wzrost: " << osoba.wzrost << endl;
}

int main() {
    TOsoba* osoba = new TOsoba("Adam", 20, 177);

    wypiszOsobe(*osoba);
    delete osoba;

    return 0;
}
