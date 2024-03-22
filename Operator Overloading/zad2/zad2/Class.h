#pragma once

#include <iostream>
#include <vector>

using namespace std;

class Class
{
private:
	vector<int> x, y;

public:
	Class(vector<int>, vector<int>);

	Class();

	vector<int> getX();
	vector<int> getY();

	friend Class operator+(Class& obiekt1, Class& obiekt2);
};

