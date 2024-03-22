#include "TOkr¹g.h"

TOkr¹g::TOkr¹g(float promieñ, float x, float y) :promieñ(promieñ), œrodek({ x,y })
{

}

bool Przecinaj¹Siê(const TOkr¹g &okr¹g1,const TOkr¹g& okr¹g2)
{
	
	float op=(okr¹g1.promieñ) - (okr¹g2.promieñ);
	float d = sqrt(pow((okr¹g2.œrodek.x)-(okr¹g1.œrodek.x),2) + pow((okr¹g2.œrodek.y) - (okr¹g1.œrodek.y),2));
	if (abs(op) < d && d < okr¹g1.promieñ + okr¹g2.promieñ)
		return true;
	else
		return false;
}
