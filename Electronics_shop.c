// ELECTRONICS SHOP
//A person wants to determine the most expensive computer keyboard and USB drive that can be purchased with a give budget. Given price lists for keyboards and USB drives and a budget, find the cost to buy them. If it is not possible to buy both items, return -1.
# include<stdio.h>
# include<stdlib.h>
int main()
{
    int i,j;
    int n,m;
    int f=0;
    long int b;
    long int max=0;
    long int n1[1000];
    long int m1[1000];
    long int p;
    scanf("%ld %d %d",&b,&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&n1[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%ld",&m1[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            p=n1[i]+m1[j];
            if((max<p)&&(p<=b))
            {
                max=p;
                f++;
            }
            
        }
    }
    if(f!=0)
    {
        printf("%ld", max);
    }
    else 
    {
        printf("-1");
    }

}
