#ifndef _Cau4_H_
#define _Cau4_H_

#include <stdio.h>

struct HocTu {
	char loai;
	int so_luong;
	bool duoc_cho;
};

void Cau4();

void Cau4b(HocTu TuKeo[][100], int m, int n);

void Cau4c(HocTu TuKeo[][100], int m, int n);

int tong_so_keo(HocTu TuKeo[][100], int m, int n, char k);

bool ghet_keo_gung(HocTu TuKeo[][100], int m, int n);

#endif