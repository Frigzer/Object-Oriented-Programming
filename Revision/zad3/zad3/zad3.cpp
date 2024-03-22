#include <iostream>

using namespace std;

template <typename T, size_t N>
void displayArray(const T(&arr)[N]) {
    for (size_t i = 0; i < N; i++) {
        cout << arr[i];
        if (i < N - 1) {
            cout << ", ";
        }
    }
    cout << endl;
}

int main() {
    int intArray[] = { 1, 2, 3, 4, 5 };
    double doubleArray[] = { 1.5, 2.5, 3.5, 4.5, 5.5 };
    string stringArray[] = { "kiwi", "banan", "mandarynka", "gruszka" };

    cout << "Tablica int: ";
    displayArray(intArray);

    cout << "Tablica double: ";
    displayArray(doubleArray);

    cout << "Tablica string: ";
    displayArray(stringArray);

    return 0;
}
