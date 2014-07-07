
#include "Math.hpp"

#include <iostream>
#include <string>

using namespace std;
using namespace com::toxiclabs::galaxy::math;


Point::Point()
{
	x=0;
	y=0;
}

Point::Point(float x,float y)
{
	this->x=x;
	this->y=y;
}

Point::Point(Point & p)
{
	x=p.x;
	y=p.y;
}


Rectangle::Rectangle()
{
	x=0;
	y=0;
	width=0;
	height=0;
}

Rectangle::Rectangle(float x,float y,float width,float height)
{
	this->x=x;
	this->y=y;
	this->width=width;
	this->height=height;
}


bool Rectangle::Collision(Point & p)
{
	bool ret = (p.x>=x) && (p.y>=y) && (p.x<(x+width)) && (p.y<=(y+height));
	
	return ret;
}
