//program napravljen samo za inicijalizovanu matricu dimenzija 3x6, uz male izmene radi za "opsti" slucaj
#include <stdio.h>

void stampajMatricu(int mat[3][6], int brojRedova, int brojKolona);
void ogledalo(int mat[3][6], int brojRedova, int brojKolona);

int main() {
	int matrica[3][6] = {
	{ 2, 2, 4, 4, 6, 6 },
	{ 1, 2, 3, 5, 7, 9 },
	{ 1, 2, 3, 4, 5, 6 }
	};//inicijalizacija matrice recimo 3x6

	printf("Matrica pre transformacije: \n");
	stampajMatricu(matrica, 3, 6);

	printf("\nMatrica posle transformacije: \n");
	ogledalo(matrica, 3, 6);
	stampajMatricu(matrica, 3, 6);
	return 0;
}

void ogledalo(int mat[3][6], int brRedova, int brKolona) {
	int i, j, pomProm, n;
	for (i = 0; i < brRedova; i++) {
		n = brKolona;
		for (j = 0; j < n; j++) {
			pomProm = mat[i][j];
			mat[i][j] = mat[i][n - 1];
			mat[i][n - 1] = pomProm;
			n--;
		}
	}
}

void stampajMatricu(int mat[3][6], int brojRedova, int brojKolona) {
	int i, j;
	for (i = 0; i < brojRedova; i++) {
		for (j = 0; j < brojKolona; j++)
			printf("%d ", mat[i][j]);
		printf("\n");
	}
}