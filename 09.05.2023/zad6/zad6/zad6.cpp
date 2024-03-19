#include <iostream>

using namespace std;

template<typename T>
T PoleProstopadloscianu(T a, T b, T h) {
    return 2 * (a * b + a * h + b * h);
}

int main() {
    cout << "Pole prostopadloscianu o bokach 3, 4, 5 i wysokosci 6 (int): " << PoleProstopadloscianu<int>(3, 4, 5) << endl;
    cout << "Pole prostopadloscianu o bokach 1.5, 2.5, 3.5 i wysokosci 4.5 (double): " << PoleProstopadloscianu<double>(1.5, 2.5, 3.5) << endl;
    cout << "Pole prostopadloscianu o bokach 2.5, 3.5, 4.5 i wysokosci 5.5 (float): " << PoleProstopadloscianu<float>(2.5f, 3.5f, 4.5f) << endl;

    return 0;
}
