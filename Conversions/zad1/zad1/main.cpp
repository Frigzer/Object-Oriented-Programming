#include "header.h"

int main()
{
	TU³amek a(1, 5);
	TU³amek b(2, 5);
	a.wyswietlUlamki(); cout << " pomnozone z "; b.wyswietlUlamki(); cout << " wynosi: " << Mno¿enie(a, b) << endl; // wynik mo¿enia 1/5 z 2/5
	a.wyswietlUlamki(); cout << " pomnozone z 10 wynosi: " << Mno¿enie(a, 10) << endl; // wynik mno¿enia 1/5 z 2/5
	b.wyswietlUlamki(); cout << " do kwadratu wynosi: " << Kwadrat(b); // 2/5 do kwadratu
	return 0;
}