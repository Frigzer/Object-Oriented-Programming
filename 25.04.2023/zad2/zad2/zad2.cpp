#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

class Bryla 
{
public:
    virtual double PolePowierzchni() = 0;
    virtual double Obj�to��() = 0;
};

class Kula : public Bryla 
{
private:
    double promien;
public:
    Kula(double r) : promien(r) {}
    double PolePowierzchni() override
    {
        return 4 * M_PI * pow(promien, 2);
    }
    double Obj�to��() override
    {
        return (4.0 / 3.0) * M_PI * pow(promien, 3);
    }
};

class Prostopad�o�cian : public Bryla
{
private:
    double a, b, h;
public:
    Prostopad�o�cian(double aa, double bb, double hh) : a(aa), b(bb), h(hh) {}
    double PolePowierzchni() override
    {
        return 2 * (a * b + a * h + b * h);
    }
    double Obj�to��() override 
    {
        return a * b * h;
    }
};

int main() 
{
    Kula k1(2.5), k2(5.0);
    cout << "Pole powierzchni kuli 1: " << k1.PolePowierzchni() << ", objetosc kuli 1: " << k1.Obj�to��() << endl;
    cout << "Pole powierzchni kuli 2: " << k2.PolePowierzchni() << ", objetosc kuli 2: " << k2.Obj�to��() << endl;

    Prostopad�o�cian p1(2.0, 3.0, 4.0), p2(4.0, 5.0, 6.0);
    cout << "Pole powierzchni prostopadloscianu 1: " << p1.PolePowierzchni() << ", objetosc prostopadloscianu 1: " << p1.Obj�to��() << endl;
    cout << "Pole powierzchni prostopadloscianu 2: " << p2.PolePowierzchni() << ", objetosc prostopadloscianu 2: " << p2.Obj�to��() << endl;

    // Bryla b; // Nie mo�na stworzy� obiektu klasy abstrakcyjnej
    return 0;
}
