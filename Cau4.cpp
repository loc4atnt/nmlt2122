#include "Cau4.h"

void Cau4() {
	HocTu TuKeo[100][100];
	int m = 2;// dong
	int n = 3;// cot
	//TuKeo[0][0] = { 'D', 12, true };
	//TuKeo[0][1] = { 'G', 5, true };
	//TuKeo[0][2] = { 'D', 50, false };
	//TuKeo[1][0] = { 'C', 4, false };
	//TuKeo[1][1] = { 'G', 34, true };
	//TuKeo[1][2] = { 'C', 22, false };

	Cau4b(TuKeo, m, n);
	Cau4c(TuKeo, m, n);
}

void Cau4b(HocTu TuKeo[][100], int m, int n) {
	char k = 'D';
	int tong = tong_so_keo(TuKeo, m, n, k);
	printf("Tong so keo loai %c: %d\n", k, tong);
}

void Cau4c(HocTu TuKeo[][100], int m, int n) {
	if (ghet_keo_gung(TuKeo, m, n)) {
		printf("Teo ghet keo gung!");
	}
	else {
		printf("Teo khong ghet keo gung!");
	}
}

int tong_so_keo(HocTu TuKeo[][100], int m, int n, char k) {
	return -1;
}

bool ghet_keo_gung(HocTu TuKeo[][100], int m, int n) {
	return false;
}