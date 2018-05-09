#include <stdio.h>

void stampajMatricu(int mat[100][100], int brojRedova, int brojKolona);
void ucitajMatricu(int mat[100][100], int brojRedova, int brojKolona);
int najmanjiZbirKolone(int mat[100][100], int brojRedova, int brojKolona);

int main() {
	int matrica[100][100], red, kolona, indexKolone, i;
	printf("Unesi dimenzije matrice: ");
	scanf("%d%d", &red, &kolona);
	printf("Unesi elemente matrice: \n");
	ucitajMatricu(matrica, red, kolona);

	printf("Matrica pre transformacije: \n");
	stampajMatricu(matrica, red, kolona);

	indexKolone = najmanjiZbirKolone(matrica, red, kolona);
	printf("Index kolone: %d\nKolona:\n", indexKolone);
	for (i = 0; i < red; i++)
		printf("%d\n", matrica[i][indexKolone]);
	return 0;
}
int najmanjiZbirKolone(int mat[100][100], int brojRedova, int brojKolona) {
	int i, j, minSuma = 0, trenutnaSuma, indexKolone = 0;
	for (j = 0; j < brojKolona; j++) {
		trenutnaSuma = 0;
		for (i = 0; i < brojRedova; i++) {
			trenutnaSuma += mat[i][j];
		}
		if (j == 0)
			minSuma = trenutnaSuma;
		else if (minSuma > trenutnaSuma) {
			indexKolone = j;
			minSuma = trenutnaSuma;
		}
	}
	return (indexKolone);
}

void stampajMatricu(int mat[100][100], int brojRedova, int brojKolona) {
	int i, j;
	for (i = 0; i < brojRedova; i++) {
		for (j = 0; j < brojKolona; j++)
			printf("%d ", mat[i][j]);
		printf("\n");
	}
}

void ucitajMatricu(int mat[100][100], int brojRedova, int brojKolona) {
	int i, j;
	for (i = 0; i < brojRedova; i++) {
		printf("\n%d. red:\n", i + 1);
		for (j = 0; j < brojKolona; j++) {
			printf("A[%d][%d]:", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
}