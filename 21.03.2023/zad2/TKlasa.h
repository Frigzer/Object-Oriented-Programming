#pragma once

#include "TZaprzyjaźniona_Klasa.h"

class TKlasa
{
private:
    int wartosc = 0;

public:
    friend void f_Zaprzyjaźniona(TKlasa* obiekt);
    friend class TZaprzyjaźniona_Klasa;
};

