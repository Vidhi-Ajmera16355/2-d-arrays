#include <stdio.h>

int main()
{
    int r1,c1,count=0;
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
    int b[r1][c1];
    for (int i=0;i<r1;i++){
        for (int j=0;j<c1;j++){
            b[j][i]=a[i][j];
        }
    }
    for (int i=0;i<r1;i++){
        for (int j=0;j<c1;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    for (int i=0;i<r1;i++){
        for (int j=0;j<c1;j++){
            if (a[i][j]!=b[i][j]){
                count++;
                break;
            }
        }
    }
    if (count==0) printf("\n Symmetric Matrix!!");
    else printf("Skew Symmetric!!");
    return 0;
}
