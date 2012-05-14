/*************************************************************/
/***************** Created by Vian Arwanda *******************/
/********************* Version info 1.0 **********************/
/******************* Filename bresenham.h ********************/
/*************************************************************/
#include <math.h>

class bresenham {
public:
	float * arrayX;
	float * arrayY;
	float * pk;
	int * arrayXBulat;
	int * arrayYBulat;
	int step;

public: 
	void hitungBresenham(float x_awal, float y_awal, float x_akhir, float y_akhir) {
		float deltaX, deltaY, deltaX2, deltaY2, deltaY2MinDeltaX2, p0, tempPK;
		int jumlahLangkah;

		/* Step 1 */
		deltaX = x_akhir - x_awal;
		deltaY = y_akhir - y_awal;

		deltaX2 = deltaX * 2;
		deltaY2 = deltaY * 2;

		deltaY2MinDeltaX2 = deltaY2 - deltaX2;
		/* Step 1 */

		/* Step 2 */
		p0 = deltaY2 - deltaX;
		jumlahLangkah = deltaX;
		this->step = (int)jumlahLangkah;
		/* Step 2 */

		/* Step 3 - Mulai Perhitungan */
		this->arrayX = new float [jumlahLangkah];
		this->arrayY = new float [jumlahLangkah];
		this->pk = new float [jumlahLangkah];
		this->arrayXBulat = new int [jumlahLangkah];
		this->arrayYBulat = new int [jumlahLangkah];

		this->arrayX[0] = x_awal;
		this->arrayY[0] = y_awal;
		this->pk[0] = 0;
		this->arrayXBulat[0] = (int)floor(x_awal + 0.5);
		this->arrayYBulat[0] = (int)floor(y_awal + 0.5);

		tempPK = p0;
		for (int i = 1; i <= jumlahLangkah; i++) {
			if (tempPK < 0) {
				this->arrayX[i] = arrayX[i - 1] + 1;
				this->arrayY[i] = arrayY[i - 1];
				this->pk[i] = tempPK;
				tempPK = this->pk[i] + deltaY2;
				this->arrayXBulat[i] = (int)floor(arrayX[i] + 0.5);
				this->arrayYBulat[i] = (int)floor(arrayY[i] + 0.5);
			} else {
				this->arrayX[i] = arrayX[i - 1] + 1;
				this->arrayY[i] = arrayY[i - 1] + 1;
				this->pk[i] = tempPK;
				tempPK = this->pk[i] + deltaY2MinDeltaX2;
				this->arrayXBulat[i] = (int)floor(arrayX[i] + 0.5);
				this->arrayYBulat[i] = (int)floor(arrayY[i] + 0.5);
			}
		}
		/* Step 3 */
	}
};