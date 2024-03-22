#include <iostream>

using namespace std;

int main() {
    int tab[5];
    int* a = nullptr;
    int* b = {};
    a = tab + 2;

    cout << "Podaj na ktory element ma wskazywac drugi wskaznik(1-5):" << endl;

    int c;
    cin >> c;
    if (c < 1 || c>5)cout << "Bledne dane!" << endl;
    else
    {
        b = tab + (c - 1);

        if (a < b) cout << "b wskazuje na dalsze miejsce niz a" << endl;
        else if (a > b) cout << "b wskazuje blizej poczatku tablicy" << endl;
        else cout << "Oba wskazniki wskazuja na to samo miejsce" << endl;
    }
}