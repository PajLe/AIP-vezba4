//ako postoji vise od jednog elementa koji imaju vrednost max, uzima se prva od tih vrsta koje sadrze element sa vrednoscu max
//isto vazi i za min

#include <stdio.h>

void stampajMatricu(int mat[100][100], int brojRedova, int brojKolona);
void ucitajMatricu(int mat[100][100], int brojRedova, int brojKolona);
void zameniVrste(int mat[100][100], int brojRedova, int brojKolona);

int main() {
	int matrica[100][100], red, kolona;
	printf("Unesi dimenzije matrice: ");
	scanf("%d%d", &red, &kolona);
	printf("Unesi elemente matrice: \n");
	ucitajMatricu(matrica, red, kolona);

	printf("Matrica pre transformacije: \n");
	stampajMatricu(matrica, red, kolona);

	printf("\nMatrica posle transformacije: \n");
	zameniVrste(matrica, red, kolona);
	stampajMatricu(matrica, red, kolona);
	return 0;
}

void zameniVrste(int mat[100][100], int brojRedova, int brojKolona) {
	int imax = 0, jmax = 0, imin = 0, jmin = 0, i, j, pomProm;
	for (i = 0; i < brojRedova; i++) {
		for (j = 0; j < brojKolona; j++) {
			if (mat[i][j] > mat[imax][jmax]) {
				imax = i;
				jmax = j;
			}
			if (mat[i][j] < mat[imin][jmin]) {
				imin = i;
				jmin = j;
			}
		}
	}
	for (j = 0; j < brojKolona; j++) {
		pomProm = mat[imax][j];
		mat[imax][j] = mat[imin][j];
		mat[imin][j] = pomProm;
	}
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