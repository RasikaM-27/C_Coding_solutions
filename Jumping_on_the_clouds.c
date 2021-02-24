// JUMPING ON THE CLOUDS
//There is a new mobile game that starts with consecutively numbered clouds. Some of the clouds are thunderheads and others are cumulus. The player can jump on any cumulus cloud having a number that is equal to the number of the current cloud plus 1 or 2 . The player must avoid the thunderheads. Determine the minimum number of jumps it will take to jump from the starting postion to the last cloud. It is always possible to win the game.

//For each game, you will get an array of clouds numbered  if 0 they are safe or  if 1 they must be avoided.
# include<stdio.h>
# include<stdlib.h>
int main()
{
    int n;
    int i;
    int count1=0;
    int count2=0;
    int result;
    int c[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&c[i]);
    }
    for(i=0;i<n-1;)
    {
        if(c[i+1]==0)
        {
            count1=count1+1;
            i=i+1;
        }
        else 
        {
            if(c[i+2]==0)
            {
                count1=count1+1;
                i=i+2;
            }
        }
    }
    for(i=0;i<n-1;)
    {
        if(c[i+2]==0)
        {
            count2=count2+1;
            i=i+2;
        }
        else 
        {
            if(c[i+1]==0)
            {
                count2=count2+1;
                i=i+1;
            }
        }
    }
    if(count1<count2)
    {
        result=count1;
    }
    else
    {
        result=count2;
    }
    printf("%d",result);
}

