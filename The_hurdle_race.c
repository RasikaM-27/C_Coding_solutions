// THE HURDLE RACE
//A video player plays a game in which the character competes in a hurdle race. Hurdles are of varying heights, and the characters have a maximum height they can jump. There is a magic potion they can take that will increase their maximum jump height by 1 unit for each dose. How many doses of the potion must the character take to be able to jump all of the hurdles. If the character can already clear all of the hurdles, return 0.
# include<stdio.h>
# include<stdlib.h>
int main()
{
    int n,k;
    int a[100];
    int i;
    int x; 
    int y;
    scanf("%d %d",&n,&k);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    x=a[0];
    for(i=0;i<n;i++)
    {
        if(x<a[i])
        {
            x=a[i];
        }
    }
    y=x-k;
    if(y>0)
    {
        printf("%d",y);
    }
    else
    {
        printf("0");
    }
    
}

