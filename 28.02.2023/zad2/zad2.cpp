#include <iostream>

using namespace std;

int main() {
    int tab_int[6];
    double tab_double[6];

    int* int_ptr = tab_int;
    double* double_ptr = tab_double;


    for (int* i = int_ptr; i < int_ptr + 6; i++)
    {
        cout << i << endl;
    }
    cout << endl;
    for (double* i = double_ptr; i < double_ptr + 6; i++)
    {
        cout << i << endl;
    }
}