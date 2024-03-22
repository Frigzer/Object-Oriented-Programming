#include <iostream>

using namespace std;

int main()
{
    int* wsk = new int;
    *wsk = NULL;
    cout << "Przydzielono pamiec" << endl;
    for (int i = 1; i <= 100; i++)
    {
        *wsk += i;
    }
    cout << "Suma: " << *wsk << endl;
    delete wsk;
    cout << "Zwolniono przydzielona pamiec" << endl;
    
}