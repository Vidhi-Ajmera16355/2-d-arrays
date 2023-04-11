#include <stdio.h>
int main (){
  int r;
    printf("Enter number of rows:");
    scanf("%d",&r);
    int c;
    printf("Enter number of cols:");
    scanf("%d",&c);
    int arr[r][c];
    printf("enter elements:");
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
          printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    int brr[c][r];
    printf("\n");
    for (int i=0;i<c;i++){
        for (int j=0;j<r;j++){
          brr[i][j] = arr[j][i];
        }
    }
    printf("\n");
    for (int i=0;i<c;i++){
        for (int j=0;j<r;j++){
          printf("%d",brr[i][j]);
        }
     printf("\n");
    }
                 return 0 ;
                 }
