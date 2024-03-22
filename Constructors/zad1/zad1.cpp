#include <iostream>

class kasa_fiskalna 
{
private:
    int ilosc_sztuk;
    double cena_calkowita;

public:
    kasa_fiskalna() 
    {
        ilosc_sztuk = 0;
        cena_calkowita = 0.0;
    }
    void reset() 
    {
        ilosc_sztuk = 0;
        cena_calkowita = 0.0;
    }
    void add(int ile, double cena)
    {
        ilosc_sztuk += ile;
        cena_calkowita += cena;
    }
    float ile_ilosc_sztuk() 
    {
        return ilosc_sztuk;
    }

    float ile_cena() 
    {
        return cena_calkowita;
    }

    void stan() 
    {
        std::cout << "Liczba produktow to: " << ilosc_sztuk << std::endl;
        std::cout << "Cena calkowita to: " << cena_calkowita << " zlotych" << std::endl;
    }
};
int main()
{
    kasa_fiskalna zakup;
    zakup.add(2, 42.00);
    zakup.add(3, 4.24);
    zakup.add(4, 13.21);

    std::cout << "ilosc_sztuk produktow " << zakup.ile_ilosc_sztuk() << std::endl;
    std::cout << "Laczna cena " << zakup.ile_cena() << " zlotych" << std::endl;

    zakup.reset();

    std::cout << "----------RESET------------" << std::endl;

    zakup.add(5, 2.95);
    zakup.add(2, 7.82);
    zakup.add(3, 1.62);
    zakup.stan();

    return 0;
}