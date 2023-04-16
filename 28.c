#include <stdio.h>

int main()
{
    int r1,c1;
    printf("Enter number of rows and columns of first matrtix:\n");
    scanf("%d %d",&r1,&c1);
    printf("\n");
    int a[r1][c1];
    if (r1==c1){
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
    int sum=0;
    for (int i=0;i<r1;i++){
        sum+=a[i][i];
        }
        printf("Sum of main diagonal elements = %d",sum);
    }
    else {
        printf("Given order is not square matrix!!");
    }
    return 0;
}
