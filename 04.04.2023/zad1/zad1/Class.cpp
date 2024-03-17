#include "Class.h"



Class::Class(vector<int> x_, vector<int> y_):x(x_), y(y_)
{
}

Class::Class() = default;

Class Class::operator+(Class& obiekt)
{
	vector<int> new_x;
	vector<int> new_y;
    for (size_t i = 0; i < x.size(); i++) {
        new_x.push_back(x[i] + obiekt.x[i]);
    }
    for (size_t i = 0; i < y.size(); i++) {
        new_y.push_back(y[i] + obiekt.y[i]);
    }
    return Class(new_x, new_y);
}

