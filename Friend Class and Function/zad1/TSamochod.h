#pragma once

#include <iostream>
#include <string>

using namespace std;

#include "TSilnik.h"

class TSamochod
{
private:
	TSilnik silnik;
	string model;
	

public:

	TSamochod(string MODEL, int MOC, int MOMENT);

	void wypisz_informacje();

};

