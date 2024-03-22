#include "header.h"

int main()
{
	TZespolona z1(2.42, 3.3); Pokaz(z1);

	TZespolona z2(1.53); Pokaz(z2);

	TZespolona* z3 = new TZespolona(4.9); Pokaz(*z3); delete z3;

	return 0;
}