#include <stdio.h>
#define ROW 3
#define COLUMN 2

int main()
{
  int i, j;
  int mat1[ROW][COLUMN],mat2[ROW][COLUMN],mat3[ROW][COLUMN];
  
  printf("%d x %d 行列[mat1]の要素を入力してください:\n", ROW, COLUMN);
  for(i=0; i<ROW; i++)
    for(j=0; j<COLUMN; j++)
      scanf("%d", &mat1[i][j]);
      
  printf("%d x %d 行列[mat2]の要素を入力してください:\n", ROW, COLUMN);
  for(i=0; i<ROW; i++)
    for(j=0; j<COLUMN; j++)
      scanf("%d", &mat2[i][j]);
      
  for(i=0; i<ROW; i++)
    for(j=0; j<COLUMN; j++)
      mat3[i][j] = mat1[i][j] + mat2[i][j];
  
  printf("[mat1]と[mat2]の和は:\n");
  for(i=0; i<ROW; i++){
    for(j=0; j<COLUMN; j++){
      printf("%d ", mat3[i][j]);
    }
    printf("\n");
  }

  return 0;
}
