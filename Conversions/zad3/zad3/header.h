#pragma once

#include <iostream>

using namespace std;

class Stone_weight
{
private:

	const int ilo��_funt�w_na_kamien = 14;
	int kamie�;
	double reszta_w_funtach, masa_w_funtach;

public:

	Stone_weight(double ileFunt);

	Stone_weight(int ileKamien, double ileFunt);

	Stone_weight();

	void wyswietlMasaWFuntach();

	void wyswietlMasaWKamieniach();

};