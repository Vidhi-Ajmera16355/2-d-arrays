#include <stdio.h>

int main()
{
    int r1,c1;
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
    for (int i=0;i<r1;i++){
        for (int j=0;j<c1;j++){
            if (i==j && a[i][j]!=1){
                identity = -1 ;
                break;
            }
            else if (i!=j && a[i][j]!=0){
                identity=-1;
                break;
            }
        }
    }
    if (identity == 0 ){
        printf("Identity Matrix!!");
    }
    else {
        printf("Not an identity Matrix!!");
    }
    return 0;
}
