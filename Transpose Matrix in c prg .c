#include <stdio.h>
#include <stdlib.h>



void transpose()
{
    int r,c;
    printf("\nEnter the row and Column Value :\n");
    scanf("%d%d",&r,&c);
    int a[r][c];

    printf("\nEnter the elements of the Matrix  :\n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nTranspose Matrix is : \n");
    for(int i=0; i<c; i++)
    {
        for(int j=0; j<r; j++)
        {
            printf("%d  ",a[j][i]);
        }
        printf("\n");
    }
}


void main()
{
    transpose();
}



