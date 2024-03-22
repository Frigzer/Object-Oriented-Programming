#include <iostream>

using namespace std;

int wypisz(int , int );

int zmien(int* );

int main() {
	int z = 100;
	zmien(&z);
	wypisz(z - 5, z);
	zmien(&z);
	wypisz(z - 5, z);
	return 0;
}

int wypisz(int a, int po_zmianie) {
	cout << "przed zmiana: " << a << endl;
	cout << "po zmianie: " << po_zmianie << endl;
	return 0;
}

int zmien(int* a) {
	*a = *a + 5;
	return 0;
}
