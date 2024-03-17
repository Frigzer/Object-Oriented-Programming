#pragma once

#include <iostream>
#include <vector>

using namespace std;

class Class
{

public:
	vector<int> x, y;
	Class(vector<int>, vector<int>);

	Class();

	Class operator+(Class& obiekt);
};

