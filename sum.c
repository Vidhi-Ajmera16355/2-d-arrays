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
    int sum=0;
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            sum = sum + arr[i][j];
        }
        printf("The sum of matrix is %d",sum);
    }
    return 0;
}
