#include <iostream>
#include <algorithm>
#include <cmath>
#include <math.h>

using namespace std;

class T_array
{
    int* arr;
    size_t size;

public:
    void Czytaj_dane()
    {
        cout << "Podaj rozmiar tablicy: ";
        cin >> size;
        arr = new int[size];
        int* tmp = arr;
        cout << "Podaj elementy tablicy: " << endl;
        for (int i = 0; i < size; i++)
        {
            cout << i << " element: ";
            cin >> *tmp;
            tmp++;
        }
    }
    void Przetworz_dane()
    {
        sort(arr, arr + size);
    }
    void Wyswietl_dane()
    {
        int *tmp = arr;
        cout << "Posortowane elementy tablicy: ";
        for (int i = 0; i < size; i++)
        {
            cout << *tmp << " ";
            tmp++;
        }
    }
};

int main()
{
    T_array tab;
    tab.Czytaj_dane();
    tab.Przetworz_dane();
    tab.Wyswietl_dane();
}