#pragma once

#include <iostream>
#include <cmath>


using namespace std;

class TOkr�g
{
private:
	float promie�;
	struct �rodek {
		float x, y;
	}�rodek;
public:
	TOkr�g(float promie�, float x, float y);
	friend bool Przecinaj�Si�(const TOkr�g& okr�g1,const TOkr�g& okr�g2);
};

