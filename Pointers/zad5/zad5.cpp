#include <iostream>

using namespace std;

void dodaj_liczbe(int* , int* );

int main() {
	
	int a = 7;
	int b = 12;
	dodaj_liczbe(&a, &b);
}

void dodaj_liczbe(int* a, int* b) {
	int suma = *a + *b;
	cout << suma;
}