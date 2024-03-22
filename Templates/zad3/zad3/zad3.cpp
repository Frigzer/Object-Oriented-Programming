#include <iostream>

using namespace std;

template<typename T, int rozmiar>
class Tablica
{
private:
    T* elementy;

public:
    Tablica() : elementy(new T[rozmiar]) {}

    ~Tablica() {
        delete[] elementy;
    }
};

int main()
{
    Tablica<int, 5> tablica_int;
    Tablica<double, 10> tablica_double;

    return 0;
}
