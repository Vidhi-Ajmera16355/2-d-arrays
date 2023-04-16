#include <stdio.h>

int main()
{
    int r1,c1,count=0;
    printf("Enter number of rows and columns of first matrtix:\n");
    scanf("%d %d",&r1,&c1);
    printf("\n");
    int a[r1][c1],identity=0;
    printf("Enter elements of first matrtix:\n");
    for (int i=0;i<r1;i++){
        for (int j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for (int i=0;i<r1;i++){
        for (int j=0;j<c1;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i = 0; i < r1; i++){
      for(int j = 0; j < c1; j++){
         if(a[i][j] == 0)
            count++;
      }
   }
   if(count > ((r1*c1)/2))
      printf("Matrix is a sparse matrix ");
   else
      printf("Matrix is not sparse matrix");
    return 0;
}
