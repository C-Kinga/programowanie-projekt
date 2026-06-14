#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE* wejscie, * wyjscie;
	char x[100], y[100], z[100];

	wejscie = fopen("dane.txt", "r");
	wyjscie = fopen("wynik.txt", "w");

	if (wejscie == NULL || wyjscie == NULL) {
		printf("Blad plikow!\n");
		return 1;
	}
	fprintf(wyjscie, "%-20s\t%-20s\t%-20s\n", "x", "y", "z");

	while (fscanf(wejscie, "%s %s %s", x, y, z) == 3) {
		fprintf(wyjscie, "%-20s\t%-20s\t%-20s\n", x, y, z);
	}
	fclose(wejscie);
	fclose(wyjscie);

	printf("Dane zapisane w wynik.txt\n");
	return 0;
}