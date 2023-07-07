#include <stdio.h>

#define ROW_IN 5
#define COL_IN 3
#define ROW_OUT 3
#define COL_OUT 5

int main()
{
  int i, j, k = 0, inmat[ROW_IN][COL_IN], outmat[ROW_OUT][COL_OUT];
  
  printf("5 x 3行列を整数値で入力してください\n");
  for(i = 0; i < ROW_IN; i++){
    for(j = 0; j < COL_IN; j++){
      scanf("%d", &inmat[i][j]);
    }
  }

  for(i = 0; i < ROW_IN; i++){
    for(j = 0; j < COL_IN; j++){
      outmat[k / COL_OUT][k % COL_OUT] = inmat[i][j];
      k++;
    }
  }

  printf("変換した3 x 5行列の表示：\n");
  for(i = 0; i < ROW_OUT; i++){
    for(j = 0; j < COL_OUT; j++){
      printf("%2d ", outmat[i][j]);
    }
    printf("\n");
  }

  return 0;
}
