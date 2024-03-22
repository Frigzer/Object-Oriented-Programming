#include <iostream>

using namespace std;

int main() {
	
	int a;
	int b;
	int* pa = &a;
	b = *pa;
	if (a == b) {
		cout << "Instrukcje sa rownowazne" << endl;
	}
	else {
		cout << "Instrukcje nie sa rownowazne" << endl;
	}
	return 0;
}
