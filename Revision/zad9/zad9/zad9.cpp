#include <iostream>

using namespace std;

class Czlowiek {
public:
    virtual void mow() const = 0;
    virtual ~Czlowiek() {}
};

class Mezczyzna : public Czlowiek {
public:
    void mow() const override {
        cout << "Jestem mezczyzna" << endl;
    }
};

class Kobieta : public Czlowiek {
public:
    void mow() const override {
        cout << "Jestem kobieta" << endl;
    }
};

int main() {
    Czlowiek* czlowiek1 = new Mezczyzna();
    Czlowiek* czlowiek2 = new Kobieta();

    czlowiek1->mow();
    czlowiek2->mow();

    delete czlowiek1;
    delete czlowiek2;

    return 0;
}
