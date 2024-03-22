#include <iostream>

using namespace std;

template <typename T>
class Prostopadloscian {
private:
    T a, b, h;
public:
    Prostopadloscian(T a, T b, T h) : a(a), b(b), h(h) {}

    template <typename U>
    T PoleProstopadloscianu(U wspolczynnik) {
        return 2 * (a * b + b * h + a * h) * wspolczynnik;
    }
};

int main() {
    Prostopadloscian<int> p1(3, 4, 5);
    cout << "Pole prostopadloscianu o bokach 3, 4, 5 i wspolczynniku 2: "
        << p1.PoleProstopadloscianu<int>(2) << endl;

    Prostopadloscian<double> p2(2.5, 3.2, 4.1);
    cout << "Pole prostopadloscianu o bokach 2.5, 3.2, 4.1 i wspolczynniku 1.5: "
        << p2.PoleProstopadloscianu<double>(1.5) << endl;

    Prostopadloscian<float> p3(1.2, 2.3, 3.4);
    cout << "Pole prostopadloscianu o bokach 1.2, 2.3, 3.4 i wspolczynniku 0.5: "
        << p3.PoleProstopadloscianu<float>(0.5) << endl;

    return 0;
}
