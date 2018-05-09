//program napravljen za inicijalizovanu matricu 5x5 => pravi niz od 5 elemenata
#include <stdio.h>
void stampajMatricu(int mat[5][5], int brojRedova, int brojKolona);
void stampajNiz(int* B, int dimenzija);
void napraviNiz(int mat[5][5], int dimenzija, int* B);

int main() {
	int niz[5];
	int matrica[5][5] = {
	{ 3, 1, 4, 1, 5 },
	{ 9, 2, 6, 5, 3 },
	{ 5, 8, 9, 7, 9 },
	{ 3, 2, 3, 8, 4 },
	{ 6, 2, 6, 4, 3 }
	};
	
	printf("Matrica: \n");
	stampajMatricu(matrica, 5, 5);
	printf("\nNiz: \n");
	napraviNiz(matrica, 5, niz);
	stampajNiz(niz, 5);
	
	return 0;
}

void napraviNiz(int mat[5][5], int dimenzija, int* B) {
	int i;
	for (i = 0; i < dimenzija; i++) {
		B[i] = mat[i][i] + mat[i][dimenzija - 1 - i];
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

void stampajNiz(int* B, int dimenzija) {
	int i;
	for (i = 0; i < dimenzija; i++)
		printf("%d ", B[i]);
}