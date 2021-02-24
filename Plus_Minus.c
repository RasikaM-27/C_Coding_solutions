// PLUS-MINUS
//Given an array of integers, calculate the ratios of its elements that are positive, negative, and zero. Print the decimal value of each fraction on a new line with 6 places after the decimal.

//Note: This challenge introduces precision problems. The test cases are scaled to six decimal places, though answers with absolute error of up to 10^-4 are acceptable.
# include <stdio.h>
# include <stdlib.h>
int main()
{
    int arr[100];
    float b[3]={0.0,0.0,0.0};
    int n, i;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++)
    {
        if(arr[i]>0)
        {
            b[0]=(b[0]+=1);
        }
        else if(arr[i]==0)
        {
            b[2]=(b[2]+=1);
        }
        else if(arr[i]<0)
        {
           b[1]=(b[1]+=1); 
        }
    }
    for (i=0; i<3; i++)
    {
        printf("%6f\n", (b[i]/n));
    }
}

