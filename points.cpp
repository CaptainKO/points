// points.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "cListPoints.h"

int main() {
	char loc[] = "Data.txt";
	cListPoints obj;
	obj.LoadPoints(loc);
	system("pause");
    return 0;
}

