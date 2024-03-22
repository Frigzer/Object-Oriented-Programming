#include <iostream>

using namespace std;

class A {
public:
    void KomunikatA() {
        cout << "Jestem z klasy A i wywoluje metode KomunikatA()." << endl;
    }
};

class B {
public:
    void KomunikatB() {
        cout << "Jestem z klasy B i wywoluje metode KomunikatB()." << endl;
    }
};

class C {
public:
    void KomunikatC() {
        cout << "Jestem z klasy C i wywoluje metode KomunikatC()." << endl;
    }
};

class Z : public A, public B, public C {
public:
    void KomunikatZ() {
        A::KomunikatA();
        B::KomunikatB();
        C::KomunikatC();
        cout << "Jestem z klasy Z i wywoluje metode KomunikatZ()." << endl;
    }
};

int main() {
    Z z;
    z.KomunikatZ();
    return 0;
}
