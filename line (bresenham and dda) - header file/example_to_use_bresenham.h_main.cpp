#include <stdio.h>
#include <iostream>
#include <bresenham.h>

using namespace std;

int main() {
	bresenham varBresenham;
	varBresenham.hitungBresenham(8,8,20,17);

	cout << 'Pk Bresenham : ' << endl;
	for (int i = 0; i <= varBresenham.step; i++) {
		cout << varBresenham.pk[i] << ',';
	}

	cout << 'X Bresenham : ' << endl;
	for (int i = 0; i <= varBresenham.step; i++) {
		cout << varBresenham.arrayXBulat[i] << ',';
	}

	cout << 'Y Bresenham : ' << endl;
	for (int i = 0; i <= varBresenham.step; i++) {
		cout << varBresenham.arrayYBulat[i] << ',';
	}

	system("PAUSE");
	return 0;
}