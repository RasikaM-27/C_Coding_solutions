// DIVISIBLE SUM PAIRS
//Given an array of integers and a positive integer K, determine the number of (i,j) pairs where i<j and ar[i] + ar[j] is divisible by k .
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,k;
    int i,j;
    int count=0;
    int a[100];
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
                int sum=0;
                sum=a[i]+a[j];
                if((sum%k)==0)
                {
                    count=count+1;
                } 
        }
    }
    printf("%d",count);
}

