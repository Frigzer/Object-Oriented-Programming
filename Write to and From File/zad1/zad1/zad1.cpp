#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream outputFile("nowy_plik.txt");

    if (outputFile.is_open())
    { 
        string imie, nazwisko;
        int rokStudiow;

        cout << "Podaj imie: ";
        cin >> imie;

        cout << "Podaj nazwisko: ";
        cin >> nazwisko;

        cout << "Podaj rok studiow: ";
        cin >> rokStudiow;

        outputFile << imie << std::endl;
        outputFile << nazwisko << std::endl;
        outputFile << rokStudiow << std::endl;

        outputFile.close();

        cout << "Dane zapisane do pliku nowy_plik.txt." << std::endl;
    }
    else 
    {
        cout << "Nie mozna otworzyæ pliku." << std::endl;
    }

    return 0;
}
