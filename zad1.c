#include <stdio.h>

int main() {
	int dim, i, j, matrica[100][100], suma = 0;
	long proizvod = 1;
	printf("Unesi dimenzije matrice: ");
	scanf("%d", &dim);
	printf("Unesi elemente matrice: \n");
	for (i = 0; i < dim; i++) {
		printf("\n%d. red:\n", i+1);
		for (j = 0; j < dim; j++) {
			printf("A[%d][%d]:", i, j);
			scanf("%d", &matrica[i][j]);
			if (i > j)
				suma += matrica[i][j];
			if (i + j >= dim)
				proizvod *= matrica[i][j];
		}
	}
	for (i = 0; i < dim; i++) {
		for (j = 0; j < dim; j++)
			printf("%d ", matrica[i][j]);
		printf("\n");
	}
	printf("Suma ispod glavne dijagonale: %d", suma);
	printf("\nProizvod ispod sporedne dijagonale: %ld", proizvod);

	return 0;
}