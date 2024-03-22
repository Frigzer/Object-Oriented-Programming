#include <iostream>
#include <algorithm>
#include <cmath>
#include <math.h>


using namespace std;

class T_square
{
    float a, b, pole;

public:
    void Czytaj_dane()
    {
        cout << "Podaj dlugosc prostokata: ";
        cin >> a;
        cout << "Podaj szerokosc prostokata: ";
        cin >> b;
    }
    void Przetworz_dane()
    {
        pole = a * b;
    }
    void Wyswietl_dane()
    {
        printf("Pole prostokata o wymiarach %.2f x %.2f wynosi %.2f", a, b, pole);
    }
};

int main()
{
    T_square prostokat;
    prostokat.Czytaj_dane();
    prostokat.Przetworz_dane();
    prostokat.Wyswietl_dane();
}