#include "header.h"

Stone_weight::Stone_weight(double ileFunt)
{
	kamie� = ileFunt / ilo��_funt�w_na_kamien;
	reszta_w_funtach = static_cast<int>(ileFunt) % ilo��_funt�w_na_kamien;
	masa_w_funtach = ileFunt;
}
Stone_weight::Stone_weight(int ileKamien, double ileFunt)
{
	kamie� = ileKamien + (static_cast<int>(ileFunt) / ilo��_funt�w_na_kamien);
	reszta_w_funtach = static_cast<int>(ileFunt) % ilo��_funt�w_na_kamien;
	masa_w_funtach = ileKamien * ilo��_funt�w_na_kamien + ileFunt;
}
Stone_weight::Stone_weight()
{
	kamie� = 0;
	reszta_w_funtach = 0.;
	masa_w_funtach = 0.;
}

void Stone_weight::wyswietlMasaWFuntach()
{
	cout << "Masa w funtach: " << masa_w_funtach << " lb" << endl;
}
void Stone_weight::wyswietlMasaWKamieniach()
{
	cout << "Masa w kamieniach: " << kamie� << " k. " << reszta_w_funtach << " lb" << endl;
}