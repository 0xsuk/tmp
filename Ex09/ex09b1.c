#include <stdio.h>

#define ROWS 4
#define COLS 3

int main() {
	int matrix[ROWS][COLS] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9},
		{10, 11, 12}
	};
	int choice, index;

	printf("行要素と列要素のどちらを表示したいか選択して下さい\n(行要素:0, 列要素:1)  ");
	scanf("%d", &choice);

	if(choice == 0) {
		printf("表示したい行番号を入力して下さい :");
		scanf("%d", &index);
		if(index < 0 || index >= ROWS) {
			printf(" 行の範囲外です\n");
			return 1;
		}
		for(int j = 0; j < COLS; j++) {
			printf("%d ", matrix[index][j]);
		}
		printf("\n");
	} else if(choice == 1) {
		printf("表示したい列番号を入力して下さい :");
		scanf("%d", &index);
		if(index < 0 || index >= COLS) {
			printf(" 列の範囲外です\n");
			return 1;
		}
		for(int i = 0; i < ROWS; i++) {
			printf("%d\n", matrix[i][index]);
		}
	} else {
		for(int i = 0; i < ROWS; i++) {
			for(int j = 0; j < COLS; j++) {
				printf("%d ", matrix[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
