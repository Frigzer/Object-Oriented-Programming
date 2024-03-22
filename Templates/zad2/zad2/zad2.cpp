#include <iostream>

using namespace std;

template<typename T>
T Max(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    int x = 3, y = 4;
    cout << "Max(" << x << ", " << y << ") = " << Max(x, y) << endl;

    double z = 5.2, w = 2.5;
    cout << "Max(" << z << ", " << w << ") = " << Max(z, w) << endl;

    return 0;
}
