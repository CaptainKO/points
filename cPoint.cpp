#include "stdafx.h"
#include "cPoint.h"

using namespace std;

cPoint::cPoint() {
	x = 0;
	y = 0;
	
}

cPoint::cPoint(float x = 0, float y = 0) : x(x), y(y){}

void cPoint::print() {
	printf("(%.1f; %.1f)\n", x, y);
}

float cPoint::GetDis(cPoint A) {
	return sqrt((x - A.GetX())*(x - A.GetX()) + (y - A.GetY())*(y - A.GetY()));
}

float cPoint::GetX() {
	return x;
}

float cPoint::GetY() {
	return y;
}


void cPoint::SetValue(float x, float y) {
	this->x = x;
	this->y = y;
} 
 


