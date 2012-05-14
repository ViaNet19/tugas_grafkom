/*************************************************************/
/***************** Created by Vian Arwanda *******************/
/********************* Version info 1.0 **********************/
/********************** Filename dda.h ***********************/
/*************************************************************/
#include <math.h>

class dda {
public:
	float * arrayX;
	float * arrayY;
	int * arrayXBulat;
	int * arrayYBulat;
	int step;

public: 
	void hitungDDA(float x_awal, float y_awal, float x_akhir, float y_akhir) {
		float deltaX, deltaY, x_tambah, y_tambah;
		int jumlahLangkah;

		/* Step 1 */
		deltaX = x_akhir - x_awal;
		deltaY = y_akhir - y_awal;
		/* Step 1 */

		/* Step 2 */
		if (abs(deltaX) > abs(deltaY)) {
			jumlahLangkah = (int)abs(deltaX);
		} else if (abs(deltaX) < abs(deltaY)) {
			jumlahLangkah = (int)abs(deltaY);
		} else {
			jumlahLangkah = 0;
		}

		this->step = jumlahLangkah;
		/* Step 2 */

		/* Step 3 - Pertambahan pixel */
		x_tambah = deltaX / jumlahLangkah;
		y_tambah = deltaY / jumlahLangkah;
		/* Step 3 */

		/* Step 4 - Mulai perulangan */
		this->arrayX = new float [jumlahLangkah];
		this->arrayY = new float [jumlahLangkah];
		this->arrayXBulat = new int [jumlahLangkah];
		this->arrayYBulat = new int [jumlahLangkah];

		this->arrayX[0] = x_awal;
		this->arrayY[0] = y_awal;
		this->arrayXBulat[0] = (int)floor(x_awal + 0.5);
		this->arrayYBulat[0] = (int)floor(y_awal + 0.5);

		for (int i = 1; i <= jumlahLangkah; i++) {
			this->arrayX[i] = arrayX[i - 1] + x_tambah;
			this->arrayY[i] = arrayY[i - 1] + y_tambah;

			this->arrayXBulat[i] = (int)floor(arrayX[i] + 0.5);
			this->arrayYBulat[i] = (int)floor(arrayY[i] + 0.5);
		}
		/* Step 4 */
	}
};