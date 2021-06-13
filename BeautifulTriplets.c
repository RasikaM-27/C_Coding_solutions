/* BEAUTIFUL TRIPLETS
Function Description

Complete the beautifulTriplets function in the editor below.

beautifulTriplets has the following parameters:

int d: the value to match
int arr[n]: the sequence, sorted ascending
Returns

int: the number of beautiful triplets
Sample Input

STDIN           Function
-----           --------
7 3             arr[] size n = 7, d = 3
1 2 4 5 7 8 10  arr = [1, 2, 4, 5, 7, 8, 10]
Sample Output

3*/
# include<stdio.h>
# include<stdlib.h>
long int beautifulTriplets(long int n1, long int d1, long int arr1[])
{
    long int i,j,k;
    long int count=0;
    long int refer, actual_diff;
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n1;j++)
        {
            actual_diff=arr1[j]-arr1[i];
            if(actual_diff==d1)
            {
                for(k=j+1;k<n1;k++)
                {
                    refer=arr1[k]-arr1[j];
                    if(refer==d1)
                    {
                        count++;
                    }
                    else {
                        continue;
                    }
                }
            }
            else 
            {
                continue;
            }
        }
        
    }
    return count;
}
int main()
{
    long int result;
    long int n,i;
    long int d;
    long int arr[10000];
    scanf("%ld %ld",&n,&d);
    for(i=0;i<n;i++)
    {
        scanf("%ld ",&arr[i]);
    }
    result=beautifulTriplets(n, d, arr);
    printf("%ld",result);
}
