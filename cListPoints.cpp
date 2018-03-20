#include "stdafx.h"
#include "cListPoints.h"



using namespace std;
cListPoints::cListPoints() {
	arr = NULL;
}

void cListPoints::LoadPoints(char *loc) {
	ifstream file(loc);
	if (file.fail()) {
		cout << "Khong doc duoc file.\n";
		return;
	}
	int n;
	file >> n; file.ignore();
	if (n < 1 || n> 50) {
		cout << "Chi ho tro toi da 50 diem.\n";
		return;
	}
	
	arr = new cPoint[n + 1];
	float a, b;

	for (int i = 0; i < n; i++) {
		file >> a >> b; 
		file.ignore();
		arr[i].SetValue(a, b);
		arr[i].print();
	}

	file.close();
	//			Tao diem A
	cout << "Nhap diem A: ";
	cin >> a >> b;
	arr[n].SetValue(a, b);
	//			Tinh Khoang Cach
	

}

cListPoints::~cListPoints() {
	delete[] arr;
}
