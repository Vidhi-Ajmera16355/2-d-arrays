#include <stdio.h>

int main()
{
    int r,c;
    printf("Enter number of rows and columns:\n");
    scanf("%d %d",&r,&c);
    int a[r][c] ;
    printf("Enter elements of first matrtix:\n");
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int k;
    printf("Enter the number to be multiplied:");
    scanf("%d",&k);
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            a[i][j]=a[i][j]*k;
        }
    }
    printf("printing matrix after scalar multiplication:\n");
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
