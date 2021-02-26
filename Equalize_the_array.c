// EQUALIZE THE ARRAY
//Given an array of integers, determine the minimum number of elements to delete to leave only elements of equal value.

//Example arr[1, 2, 2, 3]


//Delete the 2 elements 1 and 3 leaving arr=[2, 2]. If both twos plus either the 1 or the 3 are deleted, it takes 3 deletions to leave either [3] or [1] . The minimum number of deletions is 2 .
# include<stdio.h>
# include<stdlib.h>
int main()
{
    int n;
    int i;
    int x,y,z;
    int arr[100];
    int count[100]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        x=arr[i];
        count[x-1]=count[x-1]+1;
    }
    y=count[0];
    for(i=0;i<100;i++)
    {
        if(count[i]>y)
        {
            y=count[i];
        }
    }
    z=n-y;
    printf("%d",z);
}
