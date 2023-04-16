#include <stdio.h>

int main()
{
    int r1,c1;
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
    printf("\n Lower Triangular matrtix:\n");
    int sumlow=0,sumup=0;
        for (int i=0;i<r1;i++){
            
            for (int j=0;j<c1;j++){
                if (i>=j){
                printf("%d ",a[i][j]);
                sumlow+=a[i][j];}
            else 
            printf(" ");
        }
        printf("\n");
}
printf("Sum of lower Triangular matrix elements:%d\n",sumlow);
printf("\n\n");
printf("\n Upper Triangular matrtix:\n");
for (int i = 0; i<r1; i++)
        {
            for (int j=0; j <c1; j++)
            {
	            if (j>=i)
                    {
                	printf("%d ",a[i][j]);
            	    sumup+=a[i][j];}
            	    else 
                    {
                	printf("  ");
	            }
            }
            printf("\n");
        }
        printf("Sum of lower Triangular matrix elements:%d\n",sumup);
    return 0;
}
