#pragma once

#include "TZaprzyjaüniona_Klasa.h"

class TKlasa
{
private:
    int wartosc = 0;

public:
    friend void f_Zaprzyjaüniona(TKlasa* obiekt);
    friend class TZaprzyjaüniona_Klasa;
};

