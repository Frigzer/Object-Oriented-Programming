#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

class Kszta�t
{
public:
    virtual void ObliczPole() = 0;
};

class Ko�o : public Kszta�t 
{
private:
    float promie�;
public:
    Ko�o(float r) : promie�(r) {}
    void ObliczPole() {
        float pole = M_PI * promie� * promie�;
        cout << "Pole kola: " << pole << endl;
    }
};

class Kwadrat : public Kszta�t 
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
   
    Ko�o k(5.0);
    Kwadrat kw(4.0);

    k.ObliczPole();
    kw.ObliczPole();

    Kszta�t* ksztalt;

    ksztalt = &k;
    ksztalt->ObliczPole();

    ksztalt = &kw;
    ksztalt->ObliczPole();

    return 0;
}
