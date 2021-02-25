// JUMPING ON THE CLOUD: REVISITED
//A child is playing a cloud hopping game. In this game, there are sequentially numbered clouds that can be thunderheads or cumulus clouds. The character must jump from cloud to cloud until it reaches the start again.

//There is an array of clouds, c and an energy level e=100 . The character starts from c[0] and uses 1 unit of energy to make a jump of size k to cloud c[(i+k)%n] . If it lands on a thundercloud,c[i] =1, its energy (e) decreases by 2 additional units. The game ends when the character lands back on cloud 0 .

//Given the values of n , k , and the configuration of the clouds as an array c , determine the final value of e after the game ends.
# include<stdio.h>
# include<stdlib.h>
int main()
{
    int n, k;
    int i=0;
    int c[25];
    int e=100;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&c[i]);
    }
    for(i=0;i<n;)
    {
        i=((i+k)%n);
        if(c[i]==0)
        {
            e=e-1;
            if(i==0)
            {
                break;
            }
        }
        else if(c[i]==1)
        {
            e=e-3;
            if(i==0)
            {
                break;
            }
        }
    }
    printf("%d",e);
}
