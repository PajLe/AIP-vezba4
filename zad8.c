#include <stdio.h>

void stampajMatricu(int mat[100][100], int brojRedova, int brojKolona);
void ucitajMatricu(int mat[100][100], int brojRedova, int brojKolona);
void trazeneVrste(int mat[100][100], int brojRedova, int brojKolona);

int main() {
	int matrica[100][100], red, kolona;
	printf("Unesi dimenzije matrice: ");
	scanf("%d%d", &red, &kolona);
	printf("Unesi elemente matrice: \n");
	ucitajMatricu(matrica, red, kolona);

	printf("Matrica: \n");
	stampajMatricu(matrica, red, kolona);
	trazeneVrste(matrica, red, kolona);

	return 0;
}

void trazeneVrste(int mat[100][100], int brojRedova, int brojKolona) {
	int i, j, neopadajuc;
	for (i = 0; i < brojRedova; i++) {
		neopadajuc = 1;
		for (j = 0; j < brojKolona - 1; j++) {
			if (mat[i][j + 1] < mat[i][j])
				neopadajuc = 0;//moguca optimizacija: prekinuti 2. "for" petlju kada neopadajuc == 0
		}
		if (neopadajuc)
			printf("%d. ", i);
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