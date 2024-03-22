#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

class Animal {
public:
    virtual void makeSound() const = 0;
    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    void makeSound() const override {
        cout << "Hau!" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() const override {
        cout << "Miau!" << endl;
    }
};

int main() {
    srand(static_cast<unsigned>(time(0)));

    vector<Animal*> animals;

    animals.push_back(new Dog());
    animals.push_back(new Dog());
    animals.push_back(new Cat());
    animals.push_back(new Cat());

    random_shuffle(animals.begin(), animals.end());

    for (const auto& animal : animals) {
        animal->makeSound();
    }

    for (const auto& animal : animals) {
        delete animal;
    }

    return 0;
}
