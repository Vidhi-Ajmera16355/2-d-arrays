#include <stdio.h>

int main()
{
    int r,c;
    printf("Enter number of rows and columns:\n");
    scanf("%d %d",&r,&c);
    int a[r][c] , b[r][c],sum[r][c];
    printf("Enter elements of first matrtix:\n");
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
    }
    //adding two matrix:
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("printing matrix sum:\n");
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
