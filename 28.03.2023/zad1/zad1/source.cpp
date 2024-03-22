#include "header.h"

TU³amek::TU³amek(int licz, int mian) :licznik(licz), mianownik(mian){}

TU³amek::TU³amek(int liczba):licznik(liczba),mianownik(1){}

int TU³amek::zwrocLicznik()
{
	return licznik;
}
int TU³amek::zwrocMianownik()
{
	return mianownik;
}

void TU³amek::wyswietlUlamki()
{
	cout << licznik << "/" << mianownik;
}

TU³amek::operator float()
{
	return static_cast<float>(zwrocLicznik()) / zwrocMianownik();
}

TU³amek Mno¿enie(TU³amek u³amek1, TU³amek u³amek2)
{
	return TU³amek(u³amek1.zwrocLicznik() * u³amek2.zwrocLicznik(), u³amek1.zwrocMianownik() * u³amek2.zwrocMianownik());
}

float Kwadrat(TU³amek u³amek)
{
	float liczba = static_cast<float>(u³amek.zwrocLicznik()) / u³amek.zwrocMianownik();
	return liczba * liczba;
}
