/* MINIMUM DISTANCE
The distance between two array values is the number of indices between them. Given a, find the minimum distance between any pair of equal elements in the array. If no such value exists, return -1.
STDIN           Function
-----           --------
6               arr[] size n = 6
7 1 3 4 1 7     arr = [7, 1, 3, 4, 1, 7]
OUTPUT
3*/
# include<stdio.h>
# include<stdlib.h>
long int minimumDistances(long int n1,long long int a1[])
{
    long long int i,j,min,count=0;
    long int arr[1000];
    for(i=0;i<=n1;i++)
    {
        for(j=i+1;j<=n1;j++)
        {
            if(a1[i]==a1[j])
            {
               arr[count]=(j-i);
               count++;
               break; 
            }
            else 
            {
                continue;
            }
        }
        
    }
    min=arr[0];
    for(i=1;i<count;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    if(count==0)
    {
        return(-1);
    }
    else 
    {
        return (min);
    }
    
}
int main()
{
    long int n,i;
    long int result;
    scanf("%ld",&n);
    long long int a[1000];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    result=minimumDistances(n,a);
    printf("%ld", result);
    
    
}
