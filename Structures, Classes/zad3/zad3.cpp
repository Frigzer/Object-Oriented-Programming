#include <iostream>
using namespace std;

struct T_data {

    int dzien=22, miesiac=12, rok=2002;


    T_data Pobierz_date();

    static void Wypisz_date(T_data a) {
        if (a.dzien <= 9) {
            cout << "Dzien urodzenia to: 0" << a.dzien << endl;
        }
        else {
            cout << "Dzien urodzenia to: " << a.dzien << endl;
        }
        if (a.miesiac <= 9) {
            cout << "Miesiac urodzenia to: 0" << a.miesiac << endl;
        }
        else {
            cout << "Miesiac urodzenia to: " << a.miesiac << endl;
        }
        cout << "Rok urodzenia to: " << a.rok;
    };
};

T_data Pobierz_date(T_data* z) {
    int a, b, c;
    cout << "Podaj dzien urodzin: ";
    cin >> a;
    z->dzien = a;
    cout << "Podaj miesiac urodzin: ";
    cin >> b;
    z->miesiac = b;
    cout << "Podaj rok urodzenia: ";
    cin >> c;
    z->rok = c;
    return *z;
}

class T_student {

    char inicjal[2] = { 'A','B' };

    string nazwisko = "Borek";
    int rok = 1, grupa = 1;

public:

    T_data moje_urodziny={22,12,2002};
    
    

    void Wczytaj();
    void Wypisz();
};

void T_student::Wczytaj() {


    int czypewny = 1;

    cout << "Podaj swoje inicjaly: ";
    cin >> T_student::inicjal[0];
    cin >> T_student::inicjal[1];
    cout << "Podaj swoje nazwisko: ";
    cin >> T_student::nazwisko;

    cout << "Podaj rok studiow: ";

    for (;;)
    {
        cin >> T_student::rok;
        if (T_student::rok > 6 || T_student::rok <= 0)
        {
            cout << "Podales zly rok, sprobuj jeszcze raz: ";
        }
        else
            break;
    }

    cout << "Podaj grupe: ";
    cin >> T_student::grupa;
    if (T_student::grupa > 10 || T_student::grupa <= 0)
    {
        cout << "Jesteœ pewnien swojego numeru grupy? \n1-tak\n2-nie";

        cin >> czypewny;
    }
    while (czypewny == 2)
    {
        "Podaj prawidlowy numer grupy: ";
        cin >> T_student::grupa;
        if (T_student::grupa <= 10 || T_student::grupa > 0)
            czypewny - 1;
    }
    Pobierz_date(&moje_urodziny);
}

void T_student::Wypisz()
{
    cout << "Twoje inicjaly to: " << T_student::inicjal[0] << T_student::inicjal[1] << endl;
    cout << "Twoje nazwisko to: " << T_student::nazwisko << endl;
    cout << "Twoj rok studiow to: " << T_student::rok << endl;
    cout << "Twoja grupa to: " << T_student::grupa << endl;
    T_data::Wypisz_date(moje_urodziny);
}



int main()
{
    T_student student_1, student_2;
    T_student* wsk = &student_2;
    cout << "Student 1: \n";
    student_1.Wypisz();
    
    cout << "\nStudent 2: \n";
    wsk->Wczytaj();
    cout << endl;
    wsk->Wypisz();

}
