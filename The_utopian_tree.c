// THE UTOPIAN TREE
//The Utopian Tree goes through 2 cycles of growth every year. Each spring, it doubles in height. Each summer, its height increases by 1 meter
//Utopian Tree sapling with a height of 1 meter is planted at the onset of spring. How tall will the tree be after n growth cycles?
# include<stdio.h>
# include<stdlib.h>
int main()
{
    int t;
    int x;
    int n[10];
    int i,j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<t;i++)
    {
        int h=0;
        for(j=0;j<=n[i];j++)
        {
            if((j%2)==0)
            {
                h=h+1;
            }
            else if((j%2)!=0)
            {
                h=h*2;
            }
        }
        printf("%d",h);
        printf("\n");
    }
}

