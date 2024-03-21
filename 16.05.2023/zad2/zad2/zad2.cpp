#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() 
{
    ifstream inputFile("nowy_plik.txt"); 

    if (inputFile.is_open()) 
    { 
        string line;

        while (getline(inputFile, line)) 
        { 
            cout << line << endl;
        }

        inputFile.close();

        cout << "Odczyt danych z pliku zakonczony." << endl;
    }
    else 
    {
        cout << "Nie mo¿na otworzyc pliku." << endl;
    }

    return 0;
}
