#include <stdio.h>

void stampajMatricu(int mat[100][100], int brojRedova, int brojKolona);
void ucitajMatricu(int mat[100][100], int brojRedova, int brojKolona);
void sporednaNerastuci(int mat[100][100], int brojRedova, int brojKolona);

int main() {
	int matrica[100][100], dim;
	printf("Unesi dimenzije matrice: ");
	scanf("%d", &dim);
	printf("Unesi elemente matrice: \n");
	ucitajMatricu(matrica, dim, dim);

	printf("Matrica pre transformacije: \n");
	stampajMatricu(matrica, dim, dim);
	sporednaNerastuci(matrica, dim, dim);
	printf("Matrica posle transformacije: \n");
	stampajMatricu(matrica, dim, dim);

	return 0;
}

void sporednaNerastuci(int mat[100][100], int brojRedova, int brojKolona) {
	int i, pomProm, promenjeno = 1;
	while (promenjeno) {
		promenjeno = 0;
		for (i = 0; i < brojRedova - 1; i++) {
			if (mat[i][brojRedova - 1 - i] < mat[i + 1][brojRedova - 1 - (i + 1)]) {//menjamo mesta ako je sledeci element 
				pomProm = mat[i][brojRedova - 1 - i];												//na sporednoj dijagonali veci od trenutnog
				mat[i][brojRedova - 1 - i] = mat[i + 1][brojRedova - 1 - (i + 1)];   //to radimo dok ne sortiramo celu sporednu dijagonalu
				mat[i + 1][brojRedova - 1 - (i + 1)] = pomProm;								// odnosno:
				promenjeno = 1;																					//dokle god je bar jedan element zamenio mesto sa drugim
			}																			//B U B B L E  sort
		}
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