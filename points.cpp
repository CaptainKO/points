// points.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "cListPoints.h"

using namespace std;
int main() {
	char loc[] = "Data.txt";
	cListPoints obj;
	obj.LoadPoints(loc);
	obj.QuickSort(0, obj.GetN() - 1);
	obj.PrintList();
	system("pause");
    return 0;
}

