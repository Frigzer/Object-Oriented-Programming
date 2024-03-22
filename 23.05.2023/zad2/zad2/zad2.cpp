#include <iostream>
#include <string>
#include <memory>

using namespace std;

struct Address {
    string street;
    int houseNumber;
};

struct Employee {
    string fullName;
    shared_ptr<Address> office;
};

void displayAddress(const Address& address) {
    cout << "Adres: " << address.street << " " << address.houseNumber << endl;
}

void displayEmployee(const Employee& employee) {
    cout << "Pracownik: " << employee.fullName << endl;
    cout << "Biuro ";
    displayAddress(*(employee.office));
}

int main() {
    shared_ptr<Address> address = make_shared<Address>();
    address->street = "ul. spokojna";
    address->houseNumber = 123;

    Employee employee1;
    employee1.fullName = "Jan Kowalski";
    employee1.office = address;

    Employee employee2;
    employee2.fullName = "Piotr Nowak";
    employee2.office = address;

    cout << "Przed zmiana adresu:\n";
    displayEmployee(employee1);
    displayEmployee(employee2);

    shared_ptr<Address> newAddress = make_shared<Address>();
    newAddress->street = "ul. dluga";
    newAddress->houseNumber = 456;
    employee1.office = newAddress;

    cout << "\nPo zmianie adresu:\n";
    displayEmployee(employee1);
    displayEmployee(employee2);

    return 0;
}
