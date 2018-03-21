#pragma once



class cPoint {
private:
	float x;
	float y;

public:
	cPoint();
	cPoint(float, float);
	void print();
	float GetDis(cPoint);
	float GetX();
	float GetY();
	void SetValue(float, float);

};

