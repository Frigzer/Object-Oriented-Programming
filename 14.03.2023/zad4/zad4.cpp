#include <iostream>
#include <string> 
using namespace std;

class TOsoba {
public:
	string imie;
	int wiek;
public:
	TOsoba(string imie, int wiek)
	{
		this->imie = imie;
		this->wiek = wiek;
	}
	TOsoba(const TOsoba& inny)
	{
		this->imie = inny.imie;
		this->wiek = inny.wiek;
	}
};

void wypisz_dane(TOsoba* a)
{
	cout << a->imie << " lat " << a->wiek;
}


int main() {
	string imie;
	int wiek;
	cout << "Podaj imie: ";
	cin >> imie;
	cout << "Podaj wiek: ";
	cin >> wiek;
	cout << endl;
	TOsoba* obiekt1 = new TOsoba(imie, wiek);
	TOsoba obiekt2 = *obiekt1;
	wypisz_dane(obiekt1);
	cout << endl;
	wypisz_dane(&obiekt2);
	delete obiekt1;
	return 0;
}
