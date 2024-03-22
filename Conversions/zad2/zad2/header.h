#pragma once

#include <iostream>

using namespace std;

class TZespolona
{
private:

	double cz_rzeczywista, cz_urojona;

public:

	TZespolona(double re = 0., double im = 0.);

	friend void Pokaz(TZespolona liczba);
};

