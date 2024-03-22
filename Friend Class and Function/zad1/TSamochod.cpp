#include "TSamochod.h"

TSamochod::TSamochod(string MODEL, int MOC, int MOMENT)
	: silnik(MOC, MOMENT), model(MODEL) 
{

}

void TSamochod::wypisz_informacje()
{
    cout << "Model: " << model << endl;
    cout << "Moc: " << silnik.moc << " KM" << endl;
    cout << "Maksymalny moment obrotowy: " << silnik.max_moment_obr << " Nm" << endl;
    
}
