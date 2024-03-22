#include <iostream>
#include <string>

using namespace std;

class Gora {
public:
    virtual void wypiszRodzajGory() const {
        cout << "Jestem gora" << endl;
    }
};

class GoraWysoka : public Gora {
public:
    void wypiszRodzajGory() const override {
        cout << "Jestem gora wysoka" << endl;
    }
};

class GoraNiska : public Gora {
public:
    void wypiszRodzajGory() const override {
        cout << "Jestem gora niska" << endl;
    }
};

int main() {
    Gora gora;
    GoraWysoka goraWysoka;
    GoraNiska goraNiska;

    Gora* wskaznik1 = &goraWysoka;
    Gora* wskaznik2 = &goraNiska;

    wskaznik1->wypiszRodzajGory();
    wskaznik2->wypiszRodzajGory();

    return 0;
}
