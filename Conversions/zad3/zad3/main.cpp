#include "header.h"

int main()
{
	Stone_weight ob1;

	ob1.wyswietlMasaWFuntach();
	ob1.wyswietlMasaWKamieniach();

	Stone_weight ob2(37.9);

	cout << endl;

	ob2.wyswietlMasaWFuntach();
	ob2.wyswietlMasaWKamieniach();

	cout << endl;

	Stone_weight ob3(2, 14.3);

	ob3.wyswietlMasaWFuntach();
	ob3.wyswietlMasaWKamieniach();

	return 0;
}