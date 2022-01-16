#include "Cau3.h"

void Cau3() {
	int n = 4947834;
	char kq[200];
	dinh_dang(n, kq);
	printf("%s", kq);
}

void dinh_dang(int n, char ketqua[]) {
	ketqua[0] = '\0';
	int len = 0;// do dai (so ky tu) cua chuoi ketqua

	int digit;
	char kt;
	int count = 0;
	do {
		digit = n % 10;
		kt = '0' + digit;
		chen_dau_mang(ketqua, len, kt);
		count++;
		n = n / 10;
		if (count % 3 == 0 && n > 0) {
			chen_dau_mang(ketqua, len, ',');
		}
	} while (n > 0);
}

void chen_dau_mang(char ketqua[], int& len, char kt) {
	for (int i = len; i >= 0; i--) {
		ketqua[i + 1] = ketqua[i];
	}
	ketqua[0] = kt;
	len++;
}

