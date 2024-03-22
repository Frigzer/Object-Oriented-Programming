#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
	int n;
	fstream dane;
	dane.open("RURL_dane1.txt");
	dane >> n;
	double** a = new double* [n];
	double* b = new double[n];
	for (int i = 0; i < n; i++)
		a[i] = new double[n];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			dane >> a[i][j];
		}
		dane >> b[i];
	}
	dane.close();
	std::cout << "Macierz rozszerzona przed obliczeniami: \n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << b[i] << endl;
	}

	// Obliczenia
	double* m = new double[n];
	double* temp = new double[n];
	int* test = new int[n];
	for (int i = 0; i < n; i++)
		test[i] = 0;

	double temp2;
	cout << endl << endl;

	for (int k = 0; k < n; k++)
	{
		for (int j = k; j < n; j++)
		{
			if (a[k][k] < abs(a[k][j]))
			{
				test[k] = j;
				test[j] = k;
				for (int l = k; l < n; l++)
				{
					temp[l] = a[l][j];
					a[l][j] = a[l][k];
					a[l][k] = temp[l];
				}
			}
		}

		/*
		for (int i = k + 1; i < n; i++)
		{
			if (a[k][k] == 0)
				cout << "0 na przekatnej!!!";
			m[i] = (a[i][k] / a[k][k]);
			for (int j = 0; j < n; j++)
			{
				a[i][j] -= a[k][j] * m[i];
			}
			b[i] -= b[k] * m[i];
		}

		*/

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << a[i][j] << "\t";
			}
			cout << b[i] << endl;
		}
		cout << endl << endl;
	}



	cout << endl << endl;

	cout << "Macierz rozszerzona po pierwszym etapie obliczen:\n";

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << b[i] << endl;
	}


	//Rozwi¹zywanie uk³adu równañ
	double* x = new double[n];
	for (int i = 0; i < n; i++)
		x[i] = 0;
	x[n - 1] += (b[n - 1] / a[n - 1][n - 1]);

	for (int i = n - 1; i >= 0; i--)
	{
		//x[i] = b[i] / a[i][i];
		double temp = 0;
		for (int k = i + 1; k < n; k++)
		{
			temp += a[i][k] * x[k];
		}
		if (a[i][i] == 0)
			cout << "0 na przekatnej!!!";
		x[i] = (b[i] - temp) / a[i][i];
	}

	cout << endl << endl;

	cout << "Rozwiazanie ukladu rownan:\n";
	for (int i = 0; i < n; i++)
	{
		cout << "x[" << test[i] << "]: " << x[i] << endl;
	}

}