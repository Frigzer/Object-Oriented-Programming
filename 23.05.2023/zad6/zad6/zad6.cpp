#include <iostream>

using namespace std;

class MyClass {
private:
    int value;

public:
    MyClass(int val) : value(val) {}

    int getValue() const {
        return value;
    }

    MyClass& operator=(const MyClass& other) {
        if (this != &other) {
            value = other.value;
        }
        return *this;
    }
};

int main() {
    MyClass obj1(5);
    MyClass obj2(10);

    cout << "Przed przypisaniem:\n";
    cout << "Obiekt 1: " << obj1.getValue() << endl;
    cout << "Obiekt 2: " << obj2.getValue() << endl;

    obj1 = obj2;

    cout << "\nPo przypisaniu:\n";
    cout << "Obiekt 1: " << obj1.getValue() << endl;
    cout << "Obiekt 2: " << obj2.getValue() << endl;

    return 0;
}
