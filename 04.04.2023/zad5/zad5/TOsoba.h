#pragma once

#include <iostream>

using namespace std;

class TOsoba
{
private:
	string imie;
	int wiek;

public:
	TOsoba(string imie, int wiek);
	friend ostream& operator<<(ostream& os, TOsoba& osoba);
};

