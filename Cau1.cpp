#include "Cau1.h"

void Cau1() {
	Cau1a();
	Cau1b();
}

void Cau1a() {
	int a = 12;
	int b = 6;
	int c = ucln(a, b);
	printf("UCLN cua %d va %d la %d\n", a, b, c);
}

void Cau1b() {
	int arr[] = { 48,12,78,54 };
	int n = 4;
	int u = ucln_mang(arr, n);
	printf("UCLN cua mang: %d\n", u);
}

int ucln(int a, int b) {
	while (a != b) {
		if (a > b)
			a = a - b;
		else if (b > a)
			b = b - a;
	}
	return a;
}

int ucln_mang(int a[], int n) {
	if (n <= 0) return -1;

	int u = a[0];
	for (int i = 1; i < n; i++) {
		u = ucln(u, a[i]);
	}

	return u;
}