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
    for (int i=0;i<r;i++){
        if (i%2==0){
            for (int j=0;j<c;j++){
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
        else {
            for (int j=r-1;j>=0;j--){
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
