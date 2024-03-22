#pragma once

#include <iostream>

using namespace std;

class Stone_weight
{
private:

	const int iloœæ_funtów_na_kamien = 14;
	int kamieñ;
	double reszta_w_funtach, masa_w_funtach;

public:

	Stone_weight(double ileFunt);

	Stone_weight(int ileKamien, double ileFunt);

	Stone_weight();

	void wyswietlMasaWFuntach();

	void wyswietlMasaWKamieniach();

};