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
    int off=0;
    // for (int i=0;i<r1;i++){
    //     off+=a[i][r1-i-1];
    //     }
    // --------------------------OR---------------------
    int i,j;
    for ( i=0 ,  j=c1-1 ; i<=r1-1 && j>=0 ; i++,j--){
        printf("%d ",a[i][j]);
        off+=a[i][j];
    }
    printf("Sum of off/minor diagonal elements = %d",off);
    }
    else {
        printf("Given order is not square matrix!!");
    }
    return 0;
}
