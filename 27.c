#include <stdio.h>

int main()
{
    int r1,c1,r2,c2;
    printf("Enter number of rows and columns of first matrtix:\n");
    scanf("%d %d",&r1,&c1);
    printf("\n");
    printf("Enter number of rows and columns of second matrix:\n");
    scanf("%d %d",&r2,&c2);
    int a[r1][c1] , b[r2][c2],equal=1;
    printf("Enter elements of first matrtix:\n");
    for (int i=0;i<r1;i++){
        for (int j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for (int i=0;i<r2;i++){
        for (int j=0;j<c2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    if (r1==r2 && c1==c2){
        printf("Matrices can be compared \n");
        for (int i=0;i<r1;i++){
            for (int j=0;j<c2;j++){
                if (a[i][j] != b[i][j]){
                    equal=0;
                    break;
                }
            }
        }
    }
    else {
        printf("\n Matrices Cannot be compared!!");
    }
    if (equal==1){
        printf("Matrices are equal!!\n");
    }
    else printf("But Matrices are not equal!!");
    return 0;
}
