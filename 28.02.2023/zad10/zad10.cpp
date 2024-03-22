#include <iostream>

using namespace std;

int main() {
	int x, y;
	cout << "Podaj liczbe wierszy i kolumn dla tablicy: ";
	cin >> x >> y;

	int **tab = new int *[x];
	for (int i = 0; i < x; i++)
	{
		tab[i] = new int[y];
	}

	for (int i = 0; i < x; i++)
	{
		delete tab[i];
	}
	delete tab;
}