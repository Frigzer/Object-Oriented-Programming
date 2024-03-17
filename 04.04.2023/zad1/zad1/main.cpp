#include "Class.h"

int main()
{ 
    Class set1({ 1, 2, 3 }, { 4, 5, 6 });
    Class set2({ 10, 20, 30 }, { 40, 50, 60 });

    
    Class result = set1 + set2;

    cout << "Czesc x zbioru wynikowego: ";
    for (auto& element : result.x) {
        cout << element << " ";
    }
    cout << endl;

    cout << "Czesc y zbioru wynikowego: ";
    for (auto& element : result.y) {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}