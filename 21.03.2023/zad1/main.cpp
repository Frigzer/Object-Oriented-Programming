#include "TSamochod.h"

int main()
{
    TSamochod* samochod = new TSamochod("Ferrari Purosangue", 724, 716);
    samochod->wypisz_informacje();
    delete samochod;

    return 0;
}

