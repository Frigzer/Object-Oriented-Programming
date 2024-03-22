#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

using namespace std;

template<typename T>
class Kula {
private:
    T promien;

public:
    Kula(T promien) : promien(promien) {}

    T Promien()
    {
        return promien;
    }

    T PolePowierzchni() 
    {
        return 4 * M_PI * promien * promien;
    }

    T Objetosc() 
    {
        return (4.0 / 3.0) * M_PI * promien * promien * promien;
    }
};

int main()
{
    Kula<int> kula_int(3);
    Kula<double> kula_double(2.5);
    Kula<float> kula_float(4);

    cout << "Kula o promieniu " << kula_int.Promien() << " ma pole powierzchni " << kula_int.PolePowierzchni() << " i objetosc " << kula_int.Objetosc() << endl;
    cout << "Kula o promieniu " << kula_double.Promien() << " ma pole powierzchni " << kula_double.PolePowierzchni() << " i objetosc " << kula_double.Objetosc() << endl;
    cout << "Kula o promieniu " << kula_float.Promien() << " ma pole powierzchni " << kula_float.PolePowierzchni() << " i objetosc " << kula_float.Objetosc() << endl;

    return 0;
}
