#include <stdio.h>

#define SIZE 5

int main() {
	int n, m;
	int matrixA[SIZE][SIZE], matrixB[SIZE][SIZE], matrixC[SIZE][SIZE];
    
	printf("行列の大きさNとMを入力して下さい（最大5 x 5) :");
	scanf("%d %d", &n, &m);
    
	printf("%dx %dの行列Aの要素を整数値で入力してください\n", n, m);
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			scanf("%d", &matrixA[i][j]);
    
	printf("%dx %dの行列Bの要素を整数値で入力してください\n", m, n);
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			scanf("%d", &matrixB[i][j]);
    
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++) {
			matrixC[i][j] = 0;
			for(int k=0; k<m; k++)
				matrixC[i][j] += matrixA[i][k] * matrixB[k][j];
		}
    
	printf("行列A*行列Bの結果\n");
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			printf("%d  ", matrixC[i][j]);
		}
		printf("\n");
	}
    
	return 0;
}
