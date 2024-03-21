#include <iostream>
#include <fstream>

using namespace std;

class Tablica 
{
private:
    int tablica[10][10];

public:
    void czytaj_dane() 
    {
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (i == j) {
                    tablica[i][j] = 1;
                }
                else {
                    tablica[i][j] = 0;
                }
            }
        }
    }

    void zapisz_dane_do_pliku() 
    {
        ofstream outputFile("dane.txt");

        if (outputFile.is_open()) 
        {
            for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 10; j++) {
                    outputFile << tablica[i][j] << " ";
                }
                outputFile << endl;
            }

            outputFile.close();
            cout << "Dane zostaly zapisane do pliku dane.txt." << endl;
        }
        else 
        {
            cout << "Nie mozna otworzyc pliku." << endl;
        }
    }

    void czytaj_dane_z_pliku() 
    {
        ifstream inputFile("dane.txt");

        if (inputFile.is_open())
        {
            int liczba;

            for (int i = 0; i < 10; i++)
            {
                for (int j = 0; j < 10; j++)
                {
                    inputFile >> liczba;
                    cout << liczba << " ";
                }
                cout << endl;
            }

            inputFile.close();
            cout << endl << "Dane zostaly odczytane z pliku dane.txt." << endl;
        }
        else 
        {
            cout << "Nie mozna otworzyc pliku." << endl;
        }
    }
};

int main() 
{
    Tablica tab;
    tab.czytaj_dane();
    tab.zapisz_dane_do_pliku();
    tab.czytaj_dane_z_pliku();

    return 0;
}
