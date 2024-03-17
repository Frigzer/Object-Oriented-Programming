#pragma once

#include <iostream>

using namespace std;

class Punkt2D
{
private:
	int x, y;

public:
	Punkt2D(int x_, int y_);
	friend ostream& operator<<(ostream& os, Punkt2D& p);
	friend istream& operator>>(istream& is, Punkt2D& p);

};

