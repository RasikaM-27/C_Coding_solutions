// APPLE AND ORANGE
//Sam's house has an apple tree and an orange tree that yield an abundance of fruit. Using the information given below, determine the number of apples and oranges that land on Sam's house.

//In the diagram below:

//The red region denotes the house, where s is the start point, and t is the endpoint. The apple tree is to the left of the house, and the orange tree is to its right.
//Assume the trees are located on a single point, where the apple tree is at point a , and the orange tree is at point b .
//When a fruit falls from its tree, it lands d units of distance from its tree of origin along the x-axis. *A negative value of d means the fruit fell d units to the tree's left, and a positive value of d means it falls d units to the tree's right. *
# include<stdio.h>
# include<stdlib.h>
int main()
{
    long signed int s,t;
    long signed int a,b;
    long int m,n;
    int i;
    long int x=0,y=0;
    long signed int app[1000000], ora[1000000];
    long signed int l1[1000000],l2[1000000];
    scanf("%ld %ld",&s,&t);
    scanf("%ld %ld",&a,&b);
    scanf("%ld %ld",&m,&n);
    for(i=0;i<m;i++)
    {
        scanf("%ld",&app[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%ld",&ora[i]);
    }
    for(i=0;i<m;i++)
    {
        l1[i]=a+app[i];
    }
    for(i=0;i<n;i++)
    {
        l2[i]=b+ora[i];
    }
    for (i=0;i<m;i++)
    {
        if((l1[i]>=s)&&(l1[i]<=t))
        {
            x+=1;
        }
    
    }
    for(i=0;i<n;i++)
    {
        if((l2[i]>=s)&&(l2[i]<=t))
        {
            y+=1;
        }
    }
    printf("%ld\n",x);
    printf("%ld\n",y);
    
}
