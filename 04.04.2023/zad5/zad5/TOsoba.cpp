#include "TOsoba.h"

TOsoba::TOsoba(string imie, int wiek)
{
	this->imie = imie;
	this->wiek = wiek;
}

ostream& operator<<(ostream& os, TOsoba& osoba)
{
	os << osoba.imie << " - " << osoba.wiek << " lat";
	return os;
}
