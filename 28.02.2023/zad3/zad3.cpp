#include <iostream>
#include <ctime>

using namespace std;

int main() {

    srand(time(NULL));

    int tab[15];

    for (int& x : tab)
    {
        x = rand();
    }
    int* a = tab + 4;
    int* b = tab + 9;
    int* c = tab + 10;

    cout << c - a << endl;
    cout << c - b << endl;
    cout << b - a << endl;

    cout << *c - *a << endl;
    cout << *c - *b << endl;
    cout << *b - *a << endl;
    
}