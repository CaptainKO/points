#include "cPoint.h"
#include "fstream"

class cListPoints {
private:
	cPoint *arr = NULL;
	
public:
	cListPoints();
	void LoadPoints(char *);
	~cListPoints();
};

