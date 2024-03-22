#include <iostream>
using namespace std;

class Rodzic 
{
public:
    virtual void Metoda() 
    {
        cout << "Jestem w klasie Rodzic" << endl;
    }
};

class Potomek : public Rodzic 
{
public:
    void Metoda() override 
    {
        cout << "Jestem w klasie Potomek" << endl;
    }
};

int main() 
{
    
    Rodzic rodzic;
    Potomek potomek;
    cout << "Wywolanie przez obiekty:" << endl;
    rodzic.Metoda();
    potomek.Metoda();
    cout << endl;

   
    Rodzic* wsk = &potomek;
    cout << "Wywolanie przez wskaznik:" << endl;
    wsk->Metoda();
    cout << endl;

    return 0;
}
