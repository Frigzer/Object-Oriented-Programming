#include <iostream>
#include <string>
#include <cmath>

using namespace std;

const float PI = 3.14; // sta³a PI

class Punkt 
{
protected:
    float x, y;
    string nazwa;

public:
    Punkt(string nazwa = "S", float x = 0, float y = 0) : nazwa(nazwa), x(x), y(y) {}
    void Wyswietl() { cout << "(" << x << " , " << y << ")"; }
};

class Kolo : public Punkt 
{
private:
    float promien;
    string nazwa_kola;

public:
    Kolo(string nazwa_kola = "kolko", string nazwa_punktu = "S", float x = 0, float y = 0, float promien = 1)
        : Punkt(nazwa_punktu, x, y), nazwa_kola(nazwa_kola), promien(promien) {}
    void Wyswietl() {
        cout << "Nazwa kola: " << nazwa_kola << endl;
        cout << "Srodek kola: ";
        Punkt::Wyswietl();
        cout << endl;
        cout << "Promien kola: " << promien << endl;
        cout << "Pole kola: " << PI * promien * promien << endl;
    }
};

int main()
{
    Kolo k("kolo1", "A", 4, 7, 12);
    k.Wyswietl();
    return 0;
}
