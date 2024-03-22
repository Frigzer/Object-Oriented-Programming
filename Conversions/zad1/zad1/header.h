#pragma once

#include <iostream>

using namespace std;

class TU³amek
{
private:
	int licznik, mianownik;

public:
	TU³amek(int licz, int mian);

	TU³amek(int liczba);

	int zwrocLicznik();

	int zwrocMianownik();

	void wyswietlUlamki();

	operator float();
};

TU³amek Mno¿enie(TU³amek u³amek1, TU³amek u³amek2);

float Kwadrat(TU³amek u³amek);