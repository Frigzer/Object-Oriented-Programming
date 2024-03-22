#include "header.h"

TU�amek::TU�amek(int licz, int mian) :licznik(licz), mianownik(mian){}

TU�amek::TU�amek(int liczba):licznik(liczba),mianownik(1){}

int TU�amek::zwrocLicznik()
{
	return licznik;
}
int TU�amek::zwrocMianownik()
{
	return mianownik;
}

void TU�amek::wyswietlUlamki()
{
	cout << licznik << "/" << mianownik;
}

TU�amek::operator float()
{
	return static_cast<float>(zwrocLicznik()) / zwrocMianownik();
}

TU�amek Mno�enie(TU�amek u�amek1, TU�amek u�amek2)
{
	return TU�amek(u�amek1.zwrocLicznik() * u�amek2.zwrocLicznik(), u�amek1.zwrocMianownik() * u�amek2.zwrocMianownik());
}

float Kwadrat(TU�amek u�amek)
{
	float liczba = static_cast<float>(u�amek.zwrocLicznik()) / u�amek.zwrocMianownik();
	return liczba * liczba;
}
