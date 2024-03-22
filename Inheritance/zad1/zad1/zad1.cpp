#include <iostream>

using namespace std;

class Figura 
{
protected:
    int wysokosc;
    int szerokosc;

public:
    void Ustaw_wartosc(int h, int w) 
    {
        wysokosc = h;
        szerokosc = w;
    }
};

class Prostokat : public Figura 
{
public:
    inline int Pole() { return (wysokosc*szerokosc); }
};

class Trojkat : public Figura 
{
public:
    inline int Pole() { return (wysokosc * szerokosc/2); }
};

int main() 
{
    Prostokat p;
    Trojkat t;

    p.Ustaw_wartosc(14, 30);
    t.Ustaw_wartosc(7, 17);

    cout << "Prostokat = " << p.Pole() << endl;
    cout << "Trojkat = " << t.Pole() << endl;

    return 0;
}
