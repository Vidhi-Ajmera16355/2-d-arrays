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
    int max=arr[0][0];
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            if (max<arr[i][j])
            max = arr[i][j];
        }
        printf("The max of matrix is %d\n",max);
    }
    printf("-----------------------------------\n");
    int min=arr[0][0];
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            if (min>arr[i][j])
            min = arr[i][j];
        }
        printf("The max of matrix is %d",min);
    }
    return 0;
}
