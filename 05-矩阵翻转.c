#include <stdio.h>  
int main()  
{
  //M为行数，N为列数，Mode为上下(0)/左右(1)模式的选择
  int m, n, mode;  
  int i, j;  
  int before[200][200]={0}, after[200][200]={0};  
  scanf("%d%d%d", &m, &n, &mode);  
  //input  
  for (i=0; i<m; i++)  
    for (j=0; j<n; j++)  
      scanf("%d", &before[i][j]);  
  //change  
  if (mode==0)  //模式选择  
    for (i=0; i<m; i++)  
      for (j=0; j<n; j++)  
        after[i][j]=before[i][n-j-1];  
  else
    for (i=0; i<m; i++)  
      for (j=0; j<n; j++)  
        after[i][j]=before[m-i-1][j];  
  //output  
  for (i=0; i<m; i++){   
    for (j=0; j<n; j++)
      printf("%d ", after[i][j]);       
    printf("\n");  
  }  
  return 0;  
}
