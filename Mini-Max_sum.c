// MINI-MAX SUM
//Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers.
# include<stdio.h>
# include<stdlib.h>

int main()
{
    int i,j;
    long int n[5];
    long int sum[5]={0,0,0,0,0};
    long int max=0,min=0;
    for(i=0; i<5; i++)
    {
        scanf("%ld", &n[i]);
    }
    for(j=0; j<5; j++)
    {
        for(i=0;(i<5);i++)
        {
            sum[j]+=n[i];
        }
    }
    for(i=0,j=4;(i<5)&&(j>=0);i++,j--)
    {
        sum[i]-=n[j];
    }
    max=sum[0];
    min=sum[0];
    for(i=1;i<5;i++)
    {
        if(max<sum[i])
        {
            max=sum[i];
        }
        else if(min>sum[i])
        {
            min=sum[i];
        }
    }
    printf("%ld %ld", min, max);
}

