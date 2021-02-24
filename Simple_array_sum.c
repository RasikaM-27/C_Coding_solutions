// SIMPLE ARRAY SUM
//Given an array of integers, find the sum of its elements.
# include<stdio.h>
# include<stdlib.h>
int main()
{
    int n;
    int i;
    int sum=0;
    int arr[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("%d", sum);
}
