#include <iostream>

using namespace std;

int main() {
	long double **tab=new long double *[1000];
	for (int i = 0; i < 1000; i++)
		tab[i] = new long double[1000];

	for (int i = 0; i < 1000; i++)
		delete tab[i];

	delete tab;
}