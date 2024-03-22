#include "TOkr�g.h"

TOkr�g::TOkr�g(float promie�, float x, float y) :promie�(promie�), �rodek({ x,y })
{

}

bool Przecinaj�Si�(const TOkr�g &okr�g1,const TOkr�g& okr�g2)
{
	
	float op=(okr�g1.promie�) - (okr�g2.promie�);
	float d = sqrt(pow((okr�g2.�rodek.x)-(okr�g1.�rodek.x),2) + pow((okr�g2.�rodek.y) - (okr�g1.�rodek.y),2));
	if (abs(op) < d && d < okr�g1.promie� + okr�g2.promie�)
		return true;
	else
		return false;
}
