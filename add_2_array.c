#include <stdio.h>
int main()
{
    int r;
    printf("Enter number of rows:");
    scanf("%d",&r);
    int c;
    printf("Enter number of cols:");
    scanf("%d",&c);
    int arr[r][c];
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("-----------------------------------\n");
    printf("Enter elements of second array:\n");
    int b[r][c];
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("Resultant Array:");
    printf("-----------------------------------\n");
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("-----------------------------------\n");

    int res[r][c];
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            res[i][j]=arr[i][j]+b[i][j];
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

