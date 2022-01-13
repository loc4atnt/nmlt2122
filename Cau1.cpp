#include "Cau1.h"

void Cau1() {
	Cau1a();
	Cau1b();
}

void Cau1a() {
	int a = 8;
	int b = 6;
	int c = ucln(a, b);
	printf("UCLN cua %d va %d la %d\n", a, b, c);
}

void Cau1b() {
	int arr[] = { 45,12,78,54 };
	int n = 4;
	int u = ucln_mang(arr, n);
	printf("UCLN cua mang: %d\n", u);
}

int ucln(int a, int b) {
	return -1;
}

int ucln_mang(int a[], int n) {
	return -1;
}