// DIAGONAL DIFFERENCE
//Given a square matrix, calculate the absolute difference between the sums of its diagonals.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,y,z;
    int arr[100][100];
    int sum1 =0, sum2 =0;
    int result, x;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i==j)
            {
                sum1 += arr[i][j];
            }
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if((i+j)==(n-1))
            {
                 sum2 += arr[i][j] ;
            }
        }
    }
    result = sum1 - sum2;
    x = abs(result);
    printf("%d", x);
}
