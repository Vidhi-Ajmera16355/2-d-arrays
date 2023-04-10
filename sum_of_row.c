#include <stdio.h>

int main()
{
    int r,c;
    printf("Enter number of rows:");
    scanf("%d",&r);
    printf("Enter number of cols:");
    scanf("%d",&c);
    int a[r][c];
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("--------Given Matrix--------\n");
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    int max_sum;
    for (int i=0;i<r;i++){
         max_sum=a[i][0];
        for (int j=0;j<c;j++){
            if (a[i][j]>max_sum)
            max_sum=a[i][j];
        }
        printf("Max in %d row:%d",i+1,max_sum);
    }
    
    return 0;
}
