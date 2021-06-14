/* BUBBLE SORT*/
# include<stdio.h>
# include<stdlib.h>
void swap(long int *p1, long int *p2)
{
    long int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
    
}
int bubbleSort(long int arr1[], int n1)
{
    int count=0;
    int i,j;
    for(i=0;i<(n1-1);i++)
    {
        for(j=0;j<(n1-i-1);j++)
        {
            if(arr1[j]>arr1[j+1])
            {
                swap(&arr1[j], &arr1[j+1]);
                count++;
            }
        }
    }
    return(count);
}

int main()
{
    int count1;
    int n;
    int i;
    scanf("%d",&n);
    long int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%ld",&arr[i]);
    }
    count1=bubbleSort(arr, n);
    printf("Array is sorted in %d swaps.",count1);
    printf("\nFirst Element: %ld",arr[0]);
    printf("\nLast Element: %ld",arr[n-1]);
    
    
}
