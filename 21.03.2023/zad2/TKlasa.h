#pragma once

#include "TZaprzyja�niona_Klasa.h"

class TKlasa
{
private:
    int wartosc = 0;

public:
    friend void f_Zaprzyja�niona(TKlasa* obiekt);
    friend class TZaprzyja�niona_Klasa;
};

