#include <stdio.h>
//ako ima vise istih max i min vrednosti iznad i ispod glavne dijagonale, program ce zameniti prvu max i min vrednost na koju naidje
void zameniMesta(int mat[100][100], int dim);
void stampajMatricu(int mat[100][100], int brojRedova, int brojKolona);
void ucitajMatricu(int mat[100][100], int brojRedova, int brojKolona);

int main() {
	int matrica[100][100], dim;
	printf("Unesi dimenzije matrice: ");
	scanf("%d", &dim);
	printf("Unesi elemente matrice: \n");
	ucitajMatricu(matrica, dim, dim);

	printf("Matrica pre transformacije: \n");
	stampajMatricu(matrica, dim, dim);

	printf("\nMatrica posle transformacije: \n");
	zameniMesta(matrica, dim);
	stampajMatricu(matrica, dim, dim);
	return 0;
}

void zameniMesta(int mat[100][100], int dim) {
	int i, j, pomProm, imin = 1, jmin = 0, imax = 0, jmax = 1;
	for (i = 0; i < dim; i++) {
		for (j = 0; j < dim; j++) {
			if (j > i) {
				if (mat[i][j] > mat[imax][jmax]) {
					jmax = j;
					imax = i;
				}
			}
			if (j < i) {
				if (mat[i][j] < mat[imin][jmin]) {
					jmin = j;
					imin = i;
				}
			}
		}
	}
	pomProm = mat[imax][jmax];
	mat[imax][jmax] = mat[imin][jmin];
	mat[imin][jmin] = pomProm;
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