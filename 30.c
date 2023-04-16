#include <stdio.h>

int main()
{
    int r1,c1;
    printf("Enter number of rows and columns of first matrtix:\n");
    scanf("%d %d",&r1,&c1);
    printf("\n");
    int a[r1][c1];
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
    printf("Summation of rows:\n");
    for (int i=0;i<r1;i++){
        int row_sum=0;
        for (int j=0;j<c1;j++){
            row_sum+=a[i][j];
        }
        printf("Sum of %d row is %d\n",i+1,row_sum);
    }
    printf("\n");
    printf("Summation of columns:\n");
    for (int j=0;j<c1;j++){
        int col_sum=0;
        for (int i=0;i<r1;i++){
            col_sum+=a[i][j];
        }
        printf("Sum of %d col is %d\n",j,col_sum);
    }
    return 0;
}
