#pragma once



class cPoint {
private:
	float x;
	float y;
	float fDistance;
public:
	cPoint();
	cPoint(float, float);
	void print();
	void calDis(float, float);
	float GetX();
	float GetY();
	void SetValue(float, float);
};

