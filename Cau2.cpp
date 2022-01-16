#include "Cau2.h"

void Cau2() {
	int n = 3;
	bool kt = Cau2(n);
	if (kt) printf("%d chua toan chu so le!\n", n);
	else printf("%d KHONG chua toan chu so le!\n", n);
}

bool Cau2(int n) {
	int digit;
	do {
		digit = n % 10;
		if (digit % 2 == 0) return false;
		n = n / 10;
	} while (n > 0);
	return true;
}