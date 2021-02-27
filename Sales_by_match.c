// 	SALES BY MATCH
//There is a large pile of socks that must be paired by color. Given an array of integers representing the color of each sock, determine how many pairs of socks with matching colors there are.

//Example
// n=7
// ar=[1,2,1,2,1,3,2]
//There is one pair of color 1 and one of color 2. There are three odd socks left, one of each color. The number of pairs is 2.
# include<stdio.h>
# include<stdlib.h>
int main()
{
    int n;
    int a[100];
    int count[100]={0};
    int i,j;
    int z=0;
    int y=0;
    int x=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        z=a[i]-1;
        count[z]=count[z]+1;
    }
    for(i=0;i<100;i++)
    {
        y=(count[i]/2);
        x=x+y;
    }
    printf("%d",x);
    
}
