#include <iostream>

using namespace std;

void funkcja1(int [], int);

void funkcja2(int *, int );

void funkcja3(int *, int );

int main()
{
    int tablica[4] = { 5,10,15,20 };

    funkcja1(tablica, 4);
    funkcja2(tablica, 4);
    funkcja3(tablica, 4);
}

void funkcja1(int tab[], int rozmiar) {
    int i;
    cout << "Funkcja 1:" << endl;
    for (i = 0; i < rozmiar; i++)
    {
        cout << tab[i] << endl;
    }
    cout << endl;
}
void funkcja2(int *tab, int rozmiar)
{
    int i;
    cout << "Funkcja 2:" << endl;
    for (i = 0; i < rozmiar; i++)
    {
        cout << tab[i] << endl;
    }
    cout << endl;
}
void funkcja3(int *tab, int rozmiar)
{
    int i;
    cout << "Funkcja 3:" << endl;
    for (i = 0; i < rozmiar; i++)
    {
        cout << *tab+i << endl;
    }
    cout << endl;
}
