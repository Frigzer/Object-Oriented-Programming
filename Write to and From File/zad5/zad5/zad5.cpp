#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

int main() 
{
    ifstream inputFile("wizytowka.txt");

    if (inputFile.good()) 
    {
        string line;

        while (getline(inputFile, line))
        {
            cout << line << endl;
        }

        inputFile.close();

    }
    else 
    {
        cout << "Plik wizytowka.txt nie istnieje lub nie mo¿na go odczytaæ." << endl;
        return 1;
    }

    return 0;
}
