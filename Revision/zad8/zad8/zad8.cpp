#include <iostream>

using namespace std;

class Mieszkanie;

class Przyjaciel {
public:
    void podlejKwiaty(Mieszkanie& mieszkanie);
};

class Mieszkanie {
private:
    int kwiaty;

public:
    Mieszkanie() : kwiaty(0) {}

    friend class Przyjaciel;

    void wyswietlLiczbeKwiatow() const {
        cout << "Liczba kwiatow: " << kwiaty << endl;
    }
};

void Przyjaciel::podlejKwiaty(Mieszkanie& mieszkanie) {
    mieszkanie.kwiaty += 1;
}

int main() {
    Mieszkanie mieszkanie;
    Przyjaciel przyjaciel;

    przyjaciel.podlejKwiaty(mieszkanie);
    mieszkanie.wyswietlLiczbeKwiatow();

    return 0;
}
