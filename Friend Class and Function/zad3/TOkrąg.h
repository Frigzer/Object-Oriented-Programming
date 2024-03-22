#pragma once

#include <iostream>
#include <cmath>


using namespace std;

class TOkr¹g
{
private:
	float promieñ;
	struct œrodek {
		float x, y;
	}œrodek;
public:
	TOkr¹g(float promieñ, float x, float y);
	friend bool Przecinaj¹Siê(const TOkr¹g& okr¹g1,const TOkr¹g& okr¹g2);
};

