#include <iostream>
#include <string>

using namespace std;

struct Address {
    string street;
    int houseNumber;
};

struct Employee {
    string fullName;
    Address* office;
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
    Address* address = new Address;
    address->street = "ul. dluga";
    address->houseNumber = 123;

    Employee employee1;
    employee1.fullName = "Jan Nowak";
    employee1.office = address;

    Employee employee2;
    employee2.fullName = "Piotr Kowalski";
    employee2.office = address;

    cout << "Przed zmiana adresu:\n";
    displayEmployee(employee1);
    displayEmployee(employee2);

    Address* newAddress = new Address;
    newAddress->street = "ul. kwiatkowa";
    newAddress->houseNumber = 456;
    employee1.office = newAddress;

    cout << "\nPo zmianie adresu:\n";
    displayEmployee(employee1);
    displayEmployee(employee2);

    delete address;
    delete newAddress;

    return 0;
}
