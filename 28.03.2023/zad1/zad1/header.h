#pragma once

#include <iostream>

using namespace std;

class TU�amek
{
private:
	int licznik, mianownik;

public:
	TU�amek(int licz, int mian);

	TU�amek(int liczba);

	int zwrocLicznik();

	int zwrocMianownik();

	void wyswietlUlamki();

	operator float();
};

TU�amek Mno�enie(TU�amek u�amek1, TU�amek u�amek2);

float Kwadrat(TU�amek u�amek);