//program napravljen za inicijalizovanu matricu 5x5, uz male izmene radi za "opsti" slucaj
#include <stdio.h>

void stampajMatricu(int mat[5][5], int brojRedova, int brojKolona);
void stampajTransponovanuMatricu(int mat[5][5], int brojRedova, int brojKolona);
void izraz(int mat[5][5], int brojRedova, int brojKolona);

int main() {
	int matrica[5][5] = {
	{ 3, 1, 4, 1, 5 },
	{ 9, 2, 6, 5, 3 },
	{ 5, 8, 9, 7, 9 },
	{ 3, 2, 3, 8, 4 },
	{ 6, 2, 6, 4, 3 }
	};
	printf("Matrica pre transformacije: \n");
	stampajMatricu(matrica, 5, 5);
	printf("Transponovana matrica:\n");
	stampajTransponovanuMatricu(matrica, 5, 5);

	printf("\nMatrica posle izvrsenja datog izraza: \n");
	izraz(matrica, 5, 5);	
	return 0;
}

void izraz(int mat[5][5], int brojRedova, int brojKolona) {
	int i, j;
	for (i = 0; i < brojRedova; i++) {
		for (j = 0; j < brojKolona; j++) {
			printf("%d ", mat[i][j] - 2 * mat[j][i]);
		}
		printf("\n");
	}
}

void stampajMatricu(int mat[5][5], int brojRedova, int brojKolona) {
	int i, j;
	for (i = 0; i < brojRedova; i++) {
		for (j = 0; j < brojKolona; j++)
			printf("%d ", mat[i][j]);
		printf("\n");
	}
}

void stampajTransponovanuMatricu(int mat[5][5], int brojRedova, int brojKolona) {
	int i, j;
	for (i = 0; i < brojRedova; i++) {
		for (j = 0; j < brojKolona; j++)
			printf("%d ", mat[j][i]);
		printf("\n");
	}
}