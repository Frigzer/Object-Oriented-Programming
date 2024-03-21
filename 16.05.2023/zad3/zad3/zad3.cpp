#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() 
{
    string imie, nazwisko;
    int numerTelefonu;

    cout << "Podaj imie: ";
    cin >> imie;

    cout << "Podaj nazwisko: ";
    cin >> nazwisko;

    cout << "Podaj numer telefonu: ";
    cin >> numerTelefonu;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    ofstream outputFile("wizytowka.txt");

    if (outputFile.is_open()) 
    {
        outputFile << "Imi�: " << imie << endl;
        outputFile << "Nazwisko: " << nazwisko << endl;
        outputFile << "Numer telefonu: " << numerTelefonu << endl;

        outputFile.close();

        cout << "Wizytowka zosta�a zapisana w pliku wizytowka.txt." << endl;
    }
    else 
    {
        cout << "Nie mo�na otworzy� pliku." << endl;
    }

    return 0;
}
