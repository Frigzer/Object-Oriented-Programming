#include <iostream>
#include <fstream>

using namespace std;

class Tablica 
{
private:
    int a[10][10];
    int b[10][10];

public:
    void czytaj_dane() 
    {
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (i == 1) {
                    a[i][j] = 1;
                }
                else {
                    a[i][j] = 0;
                }
            }
        }
    }

    void przetworz_dane() 
    {
        for (int i = 0; i < 10; i++) 
        {
            for (int j = 0; j < 10; j++) 
            {
                b[i][j] = a[j][i];
            }
        }
    }

    void zapisz_dane_do_pliku() 
    {
        ofstream outputFile("dane.txt");

        if (outputFile.is_open()) 
        {
            for (int i = 0; i < 10; i++) 
            {
                for (int j = 0; j < 10; j++)
                {
                    outputFile << b[i][j] << " ";
                }
                outputFile << std::endl;
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
            for (int i = 0; i < 10; i++)
            {
                for (int j = 0; j < 10; j++)
                {
                    inputFile >> b[i][j];
                }
            }

            inputFile.close();

            cout << "Tablica odczytana z pliku dane.txt:" << endl;
            for (int i = 0; i < 10; i++)
            {
                for (int j = 0; j < 10; j++) 
                {
                    cout << b[i][j] << " ";
                }
                cout << endl;
            }
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
    tab.przetworz_dane();
    tab.zapisz_dane_do_pliku();
    tab.czytaj_dane_z_pliku();
    return 0;
}
