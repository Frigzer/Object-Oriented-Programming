#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

class Kszta³t
{
public:
    virtual void ObliczPole() = 0;
};

class Ko³o : public Kszta³t 
{
private:
    float promieñ;
public:
    Ko³o(float r) : promieñ(r) {}
    void ObliczPole() {
        float pole = M_PI * promieñ * promieñ;
        cout << "Pole kola: " << pole << endl;
    }
};

class Kwadrat : public Kszta³t 
{
private:
    float a;
public:
    Kwadrat(float bok) : a(bok) {}
    void ObliczPole() {
        float pole = a * a;
        cout << "Pole kwadratu: " << pole << endl;
    }
};

int main()
{
   
    Ko³o k(5.0);
    Kwadrat kw(4.0);

    k.ObliczPole();
    kw.ObliczPole();

    Kszta³t* ksztalt;

    ksztalt = &k;
    ksztalt->ObliczPole();

    ksztalt = &kw;
    ksztalt->ObliczPole();

    return 0;
}
