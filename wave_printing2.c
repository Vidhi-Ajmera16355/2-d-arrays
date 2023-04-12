#include <stdio.h>

int main()
{
    int r;
    printf("Enter number of rows:\n");
    scanf("%d",&r);
    int c;
    printf("Enter number of cols:\n");
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
    printf("\n\n");
    for (int j=0;j<c;j++){
        if (j%2==0){
            for (int i=r-1;i>=0;i--){
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
        else {
            for (int i=0;i<r;i++){
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
