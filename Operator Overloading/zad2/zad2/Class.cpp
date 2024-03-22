#include "Class.h"



Class::Class(vector<int> x_, vector<int> y_) :x(x_), y(y_)
{
}

Class::Class() = default;

vector<int> Class::getX()
{
    return x;
}

vector<int> Class::getY()
{
    return y;
}

Class operator+(Class& obiekt1, Class& obiekt2)
{
    vector<int> new_x;
    vector<int> new_y;
    for (size_t i = 0; i < obiekt1.x.size(); i++) {
        new_x.push_back(obiekt1.x[i] + obiekt2.x[i]);
    }
    for (size_t i = 0; i < obiekt1.y.size(); i++) {
        new_y.push_back(obiekt1.y[i] + obiekt2.y[i]);
    }
    return Class(new_x, new_y);
}

