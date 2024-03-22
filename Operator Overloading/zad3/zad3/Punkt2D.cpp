#include "Punkt2D.h"

Punkt2D::Punkt2D(int x_, int y_):x(x_),y(y_)
{
}

ostream& operator<<(ostream& os, Punkt2D& p)
{
	os << "Punkt (" << p.x << ", " << p.y << ")";
	return os;
}

istream& operator>>(istream& is, Punkt2D& p)
{
	cout << "Podaj wspolrzedne punktu (x, y): ";
	is >> p.x >> p.y;
	return is;
}
