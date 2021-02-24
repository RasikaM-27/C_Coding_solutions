//SUB-ARRAY DIVISION
//Given a chocolate bar, two children, Lily and Ron, are determining how to share it. Each of the squares has an integer on it.

//Lily decides to share a contiguous segment of the bar selected such that:

//The length of the segment matches Ron's birth month, and,
//The sum of the integers on the squares is equal to his birth day.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j;
    int d,m;
    int s[100];
    int count=0;
    int n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    scanf("%d %d",&d,&m);
    for(i=0;i<n;i++)
    {
      int x=0;
      int sum=0;
      for(j=i;x<m;j++)
      {
          x=x+1;
          sum=sum+s[j];
      }
      if(sum==d)
          {
              count=count+1;
          }
    }
   printf("%d", count);
    
}

