#include "stdafx.h"
#include "cListPoints.h"



using namespace std;
cListPoints::cListPoints() {
	arr = NULL;
	n = 1;
}

int cListPoints::GetN() {
	return n;
}

void cListPoints::PrintList() {
	for (int i = 0; i < n; i++) {
		arr[i].print();
	}
}

void cListPoints::LoadPoints(char *loc) {
	ifstream file(loc);
	if (file.fail()) {
		cout << "Khong doc duoc file.\n";
		return;
	}
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

}



int cListPoints::Partition(int low, int high) {
	 float pivot = arr[high].GetDis(arr[n]);
	int i = (low - 1);

	for (int j = low; j <= high - 1; j++) {
		if (arr[j].GetDis(arr[n]) >= pivot) {
			i++;    
			swap(arr[i], arr[j]);
		}
	}

	swap(arr[i + 1], arr[high]);
	return (i + 1);
}

void cListPoints::QuickSort(int low, int high) {
	if (low < high) {
		int pi = Partition(low, high);
		QuickSort(low, pi - 1);
		QuickSort(pi + 1, high);
	}
}

cListPoints::~cListPoints() {
	delete[] arr;
}
