#include <iostream>
#include <string>
using namespace std;

class TSilnik 
{
public:
    int moc;
    int max_moment_obr;

    TSilnik(int m, int n) 
    {
        moc = m;
        max_moment_obr = n;
    }
};

class TSamochod 
{
public:
    TSilnik silnik;
    string model;

    TSamochod(string MODEL, int MOC, int MOMENT) : silnik(MOC, MOMENT), model(MODEL) {}
};

void wypisz_informacje(TSamochod a) {
    cout << "Model: " << a.model << endl;
    cout << "Moc: " << a.silnik.moc << " KM" << endl;
    cout << "Maksymalny moment obrotowy: " << a.silnik.max_moment_obr << " Nm" << endl;
}

int main() 
{
    TSamochod* samochod = new TSamochod("Ferrari Purosangue", 724, 716);
    wypisz_informacje(*samochod);
    delete samochod;

    return 0;
}

