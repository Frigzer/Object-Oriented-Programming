#include "header.h"

Stone_weight::Stone_weight(double ileFunt)
{
	kamieñ = ileFunt / iloœæ_funtów_na_kamien;
	reszta_w_funtach = static_cast<int>(ileFunt) % iloœæ_funtów_na_kamien;
	masa_w_funtach = ileFunt;
}
Stone_weight::Stone_weight(int ileKamien, double ileFunt)
{
	kamieñ = ileKamien + (static_cast<int>(ileFunt) / iloœæ_funtów_na_kamien);
	reszta_w_funtach = static_cast<int>(ileFunt) % iloœæ_funtów_na_kamien;
	masa_w_funtach = ileKamien * iloœæ_funtów_na_kamien + ileFunt;
}
Stone_weight::Stone_weight()
{
	kamieñ = 0;
	reszta_w_funtach = 0.;
	masa_w_funtach = 0.;
}

void Stone_weight::wyswietlMasaWFuntach()
{
	cout << "Masa w funtach: " << masa_w_funtach << " lb" << endl;
}
void Stone_weight::wyswietlMasaWKamieniach()
{
	cout << "Masa w kamieniach: " << kamieñ << " k. " << reszta_w_funtach << " lb" << endl;
}