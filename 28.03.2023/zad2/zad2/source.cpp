#include "header.h"

TZespolona::TZespolona(double re, double im)
{
	cz_rzeczywista = re;
	cz_urojona = im;
}

void Pokaz(TZespolona liczba)
{
	cout << "[ " << liczba.cz_rzeczywista << ", " << liczba.cz_urojona << " ]";
}