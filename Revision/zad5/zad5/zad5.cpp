#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void setData(const string& newName, int newAge) {
        name = newName;
        age = newAge;
    }

    void displayData() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Employee : public Person {
private:
    string education;

public:
    void setEducation(const string& newEducation) {
        education = newEducation;
    }

    void displayData() const {
        Person::displayData();
        cout << "Education: " << education << endl;
    }
};

int main() {
    Person person;
    person.setData("John Doe", 30);
    cout << "Person's data:\n";
    person.displayData();

    Employee employee;
    employee.setData("Jane Smith", 25);
    employee.setEducation("Bachelor's Degree");
    cout << "\nEmployee's data:\n";
    employee.displayData();

    return 0;
}
