#include <iostream>
#include <iomanip> 

class przedmiot {

private:
    std::string nazwa="ciastka";
    double cena = 5.40;

public:
    przedmiot()
    {

    }
    przedmiot(std::string nazwa1)
    {
        nazwa = nazwa1;
    }
    przedmiot(std::string nazwa2, double cena2)
    {
        nazwa = nazwa2;
        cena = cena2;
    }
    static void drukuj(przedmiot a)
    {
        std::cout << "Nazwa to: " << a.nazwa << std::endl;
        std::cout << "Cena to: " << std::setprecision(2) << std::fixed << a.cena << std::endl;
    }
};


int main() {
    przedmiot pierwszy;
    przedmiot drugi("woda");
    przedmiot trzeci("folia_aluminiowa", 12.56);
    przedmiot::drukuj(pierwszy);
    przedmiot::drukuj(drugi);
    przedmiot::drukuj(trzeci);
    return 0;
}

