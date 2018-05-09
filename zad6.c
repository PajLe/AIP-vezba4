#include <stdio.h>
void jednoMestoDesno(int mat[5][5], int dim) {
	int i, j, p;
	for (i = 0; i < dim; i++) {
		for (j = dim - 1; j > i + 1; j--) {
			p = mat[i][j];
			mat[i][j] = mat[i][j - 1];
			mat[i][j - 1] = p;
		}
	}
}
int main() {
	int i, j, k;
	int matrica[5][5] = {
	{ 3,1,4,1,5 },
	{ 9,2,6,5,3 },
	{ 5,8,9,7,9 },
	{ 3,2,3,8,4 },
	{ 6,2,6,4,3 }
	};
	//inicijalizacija matrice (recimo 5x5)
	
	printf("Unesi k: ");
	scanf("%d", &k);

	printf("Matrica pre transformacije: \n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++)
			printf("%d ", matrica[i][j]);
		printf("\n");
	}
	//stampanje

	printf("\nMatrica posle transformacije: \n");
	for (i = 0; i < k; i++)
		jednoMestoDesno(matrica, 5);
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++)
			printf("%d ", matrica[i][j]);
		printf("\n");
	}
	//stampanje
	return 0;
}

