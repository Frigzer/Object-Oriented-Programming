#include <iostream>
#include <iomanip> 

class konto_bankowe {

private:
    double saldo;

public:
    konto_bankowe()
    {
        saldo = 0;
    }
    konto_bankowe(double wartosc_poczatkowa)
    {
        saldo = wartosc_poczatkowa;
    }
    void depozyt(konto_bankowe* a, double depozyt)
    {
        a->saldo = a->saldo + depozyt;
        std::cout << "Wplacono : " << std::setprecision(2) << std::fixed << depozyt << " zlotych" << std::endl;
    }

    void wyplaty(konto_bankowe* b, double wyplata)
    {
        if (b->saldo < wyplata)
        {
            std::cout << "Nie wystarczajaco pieniedzy" << std::endl;
        }
        else
        {
            b->saldo = b->saldo - wyplata;
            std::cout << "Wyplacono : " << std::setprecision(2) << std::fixed << wyplata << " zlotych" << std::endl;

        }
    }
    void pobierz_saldo(konto_bankowe* c)
    {
        std::cout << "Na koncie jest : " << std::setprecision(2) << std::fixed << c->saldo << " zlotych" << std::endl;
    }

};

int main() {
    konto_bankowe konto1(15.11);
    konto1.pobierz_saldo(&konto1);
    konto1.depozyt(&konto1, 10.10);
    konto1.pobierz_saldo(&konto1);
    konto1.wyplaty(&konto1, 3.10);
    konto1.pobierz_saldo(&konto1);

    std::cout << std::endl;

    konto_bankowe konto2(3.00);
    konto2.pobierz_saldo(&konto2);
    konto2.depozyt(&konto2, 11.00);
    konto2.pobierz_saldo(&konto2);
    std::cout << "Proba wyplaty 20 zl, ";
    konto2.wyplaty(&konto2, 20.00);
    konto2.pobierz_saldo(&konto2);
    return 0;
}

