#include <iostream>
#include <string>

using namespace std;

class Osoba 
{
protected:
    string imie;
    string nazwisko;
    string ulica;

public:
    void wczytaj_dane() 
    {
        cout << "Podaj imie: ";
        cin >> imie;
        cout << "Podaj nazwisko: ";
        cin >> nazwisko;
        cout << "Podaj ulice: ";
        cin >> ulica;
    }

    void wyswietl_dane() 
    {
        cout << "Imie: " << imie << endl;
        cout << "Nazwisko: " << nazwisko << endl;
        cout << "Ulica: " << ulica << endl;
    }
};

class Kadra : public Osoba 
{
private:
    string wyksztalcenie;

public:
    void wczytaj_dane() 
    {
        Osoba::wczytaj_dane();
        cout << "Podaj wyksztalcenie: ";
        cin >> wyksztalcenie;
    }

    void wyswietl_dane() 
    {
        Osoba::wyswietl_dane();
        cout << "Wyksztalcenie: " << wyksztalcenie << endl;
    }

    void wczytaj_dane_1() 
    {
        wczytaj_dane();
    }

    void wyswietl_dane_1()
    {
        wyswietl_dane();
    }
};

int main() 
{
    Kadra k;
    k.wczytaj_dane_1();
    cout << endl << "Dane osoby: " << endl;
    k.wyswietl_dane_1();

    return 0;
}
