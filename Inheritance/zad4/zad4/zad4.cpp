#include <iostream>
#include <string>

using namespace std;

class Zwierze 
{
public:
    int wiek;
    int iloscNog;
};

class ZwierzeDomowe : public Zwierze 
{
public:
    string imie;
    string kolorSiersci;
};

class Hipopotam : public Zwierze 
{
public:
    void plyn() {
        cout << "Hipopotam plynie" << endl;
    }
};

class Kot : public ZwierzeDomowe 
{
public:
    void drap() {
        cout << "Kot drapie mebel" << endl;
    }
};

class Pies : public ZwierzeDomowe 
{
public:
    void szczekaj() {
        cout << "Pies szczeka" << endl;
    }
};

int main() 
{
    Hipopotam hipo;
    hipo.wiek = 10;
    hipo.iloscNog = 4;
    hipo.plyn();

    Kot kotka;
    kotka.wiek = 5;
    kotka.iloscNog = 4;
    kotka.imie = "Dioda";
    kotka.kolorSiersci = "rudy";
    kotka.drap();

    Pies piesel;
    piesel.wiek = 3;
    piesel.iloscNog = 4;
    piesel.imie = "Andrzej";
    piesel.kolorSiersci = "brazowy";
    piesel.szczekaj();

    return 0;
}
