#include "TOsoba.h"

int main() {
    TOsoba osoby[5] = { TOsoba("Anna", 28), TOsoba("Jan", 40), TOsoba("Adam", 20), TOsoba("Tomasz", 53), TOsoba("Aleksandra", 22) };
    for (int i = 0; i < 5; i++) {
        cout << osoby[i] << endl;
    }
    return 0;
}