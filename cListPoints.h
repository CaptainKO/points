#include "cPoint.h"
#include "fstream"

class cListPoints {
private:
	cPoint *arr;
	int n;
	int Partition(int, int);

public:
	cListPoints();
	void LoadPoints(char *);
	void PrintList();
	int GetN();
	void QuickSort(int, int);
	~cListPoints();

};

