// PICKING NUMBERS
//Given an array of integers, find the longest subarray where the absolute difference between any two elements is less than or equal to 1.
# include<stdio.h>
# include<stdlib.h>
int main()
{
    int a[100];
    int n;
    int i,j;
    int result;
    int count[100]={0};
    int x,y;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int count1=0;int count2=0;int count3=0;
        for(j=i;j<n;j++)
        {
            if((a[i]-a[j])==0)
            {
                count1 = count1+1;
            }
            else if((a[i]-a[j])==-1)
            {
                count2=count2+1;
            }
            else if((a[i]-a[j])==1)
            {
                count3=count3+1;
            }
        }
        x=count1+count2;
        y=count1+count3;
        if(x>y)
        {
            count[i]=x;
        }
        else if(y>x)
        {
            count[i]=y;
        }
        else if(x==y)
        {
            count[i]=x;
        }
    }
    result=count[0];
    for(i=0;i<n;i++)
    {
        if(count[i]>result)
        {
            result=count[i];
        }
    }
    printf("%d",result);
}

