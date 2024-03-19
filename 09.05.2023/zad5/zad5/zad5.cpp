#include <iostream>

using namespace std;

template <typename T>
class Tablica {
private:
    T* elementy;
    int rozmiar;
public:
    Tablica(int rozmiar) {
        this->rozmiar = rozmiar;
        elementy = new T[rozmiar];
    }

    ~Tablica() {
        delete[] elementy;
    }

    void Wpisz(int indeks, T wartosc) {
        if (indeks < 0 || indeks >= rozmiar) {
            cout << "Niepoprawny indeks" << std::endl;
            return;
        }
        elementy[indeks] = wartosc;
    }

    T Sumuj() {
        T suma = 0;
        for (int i = 0; i < rozmiar; i++) {
            suma += elementy[i];
        }
        return suma;
    }
};

int main() {
    Tablica<int> tablica_int(5);
    tablica_int.Wpisz(0, 1);
    tablica_int.Wpisz(1, 2);
    tablica_int.Wpisz(2, 3);
    tablica_int.Wpisz(3, 4);
    tablica_int.Wpisz(4, 5);
    cout << "Suma elementow tablicy int: " << tablica_int.Sumuj() << endl;

    Tablica<double> tablica_double(3);
    tablica_double.Wpisz(0, 1.2);
    tablica_double.Wpisz(1, 2.4);
    tablica_double.Wpisz(2, 3.6);
    cout << "Suma elementow tablicy double: " << tablica_double.Sumuj() << endl;

    return 0;
}
