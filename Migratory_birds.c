// MIGRATORY BIRDS
//Given an array of bird sightings where every element represents a bird type id, determine the id of the most frequently sighted type. If more than 1 type has been spotted that maximum amount, return the smallest of their ids.
# include<stdio.h>
# include<stdlib.h>
int main()
{
    long int n,i;
    int a[200000];
    int b[5]={0,0,0,0,0};
    int max,c;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            b[0]=b[0]+1;
        }
        if(a[i]==2)
        {
            b[1]=b[1]+1;
        }
        if(a[i]==3)
        {
            b[2]=b[2]+1;
        }
        if(a[i]==4)
        {
            b[3]=b[3]+1;
        }
        if(a[i]==5)
        {
            b[4]=b[4]+1;
        }
    
    }
        max=b[0];
        for(i=0;i<5;i++)
        {
           if(b[i]>max) 
           {
               max=b[i];
           }
        }
        for(i=0;i<5;i++)
        {
            if(max==b[i])
            {  
                c=i+1;
                break;
            }
        }
        printf("%d",(c));

} 

