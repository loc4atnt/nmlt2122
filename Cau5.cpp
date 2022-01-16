#include "Cau5.h"

void Cau5() {
	giai_ma();
}

void giai_ma() {
	FILE* fi = fopen("Message.txt", "r");
	FILE* fo = fopen("Output.txt", "w");

	char chuoi[1001];
	int len;
	while (fgets(chuoi, 1000, fi) != NULL) {
		len = 0;
		while (chuoi[len] != '\n' && chuoi[len] != '\0') len++;
		chuoi[len] = '\0';

		for (int i = 0; i < len; i += 2) {
			if (i + 1 >= len) break;

			// doi vi tri chuoi[i] voi chuoi[i+1]
			char tmp = chuoi[i];
			chuoi[i] = chuoi[i + 1];
			chuoi[i + 1] = tmp;
		}

		fprintf(fo, "%s\n", chuoi);
	}

	fclose(fi);
	fclose(fo);
}


