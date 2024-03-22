#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

struct NameData {
    string name;
    int frequency;
    double percentage;
};

void processNames(const string& filename) {
    ifstream inputFile(filename);
    if (!inputFile) {
        cout << "Nie mo¿na otworzyæ pliku " << filename << endl;
        return;
    }

    vector<NameData> boysNames;
    vector<NameData> girlsNames;
    int totalBoysFrequency = 0;
    int totalGirlsFrequency = 0;

    string line;
    while (getline(inputFile, line)) {
        stringstream ss(line);
        int rank;
        ss >> rank;

        NameData boysData, girlsData;
        ss >> boysData.name >> boysData.frequency >> boysData.percentage;
        ss >> girlsData.name >> girlsData.frequency >> girlsData.percentage;

        totalBoysFrequency += boysData.frequency;
        totalGirlsFrequency += girlsData.frequency;

        boysNames.push_back(boysData);
        girlsNames.push_back(girlsData);
    }

    inputFile.close();

    int halfBoysFrequency = totalBoysFrequency / 2;
    int halfGirlsFrequency = totalGirlsFrequency / 2;
    int currentBoysFrequency = 0;
    int currentGirlsFrequency = 0;

    cout << "Imiona nadane pierwszej polowie chlopcow:" << endl;
    for (const auto& boysData : boysNames) {
        currentBoysFrequency += boysData.frequency;
        if (currentBoysFrequency > halfBoysFrequency) {
            break;
        }
        cout << boysData.name << endl;
    }

    cout << "Imiona nadane pierwszej polowie dziewczynek:" << endl;
    for (const auto& girlsData : girlsNames) {
        currentGirlsFrequency += girlsData.frequency;
        if (currentGirlsFrequency > halfGirlsFrequency) {
            break;
        }
        cout << girlsData.name << endl;
    }
}

int main() {
    string filename = "babynames.txt";
    processNames(filename);

    return 0;
}
