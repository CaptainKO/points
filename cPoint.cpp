#include "stdafx.h"
#include "cPoint.h"

using namespace std;

cPoint::cPoint() {
	x = 0;
	y = 0;
	fDistance = 0;
}

cPoint::cPoint(float x = 0, float y = 0) {
	this->x = x;
	this->y = y;
}

void cPoint::print() {
	printf("(%.1f; %.1f)\n", x, y);
}

void cPoint::calDis(float a, float b) {
	fDistance = sqrt((x - a)*(x - a) + (y - b)*(y - b));
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


