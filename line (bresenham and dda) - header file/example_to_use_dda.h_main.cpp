/*

*   Created By Vian Arwanda    *
* Timestamp 2012-05-15 10:37 AM *

*/

#include <stdio.h>
#include <iostream>
#include <dda.h>

using namespace std;

int main() {
	dda varDDA;
	varDDA.hitungDDA(8,8,20,17);

	cout << 'X DDA : ' << endl;
	for (int i = 0; i <= varDDA.step; i++) {
		cout << varDDA.arrayXBulat[i] << ',';
	}

	cout << 'Y DDA : ' << endl;
	for (int i = 0; i <= varDDA.step; i++) {
		cout << varDDA.arrayYBulat[i] << ',';
	}

	system("PAUSE");
	return 0;
}