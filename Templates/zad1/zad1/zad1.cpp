#include <iostream>

using namespace std;

template<typename T>
T Dodaj(T arg1, T arg2)
{
    return arg1 + arg2;
}

int main()
{
    string s1 = "Hello, ";
    string s2 = "world!";
    cout << Dodaj<string>(s1, s2) << endl; 

    int a = 6;
    int b = 2;
    cout << Dodaj<int>(a, b) << endl;

    double x = 3.5;
    double y = 4.0;
    cout << Dodaj<double>(x, y) << endl;

    return 0;
}
