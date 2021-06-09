/* SERVICE LANE 
Below is the representation of the lane:

   |HIGHWAY|Lane|    ->    Width      Output 

0: |       |--|            2			1
1: |       |---|           3			2
2: |       |-|             1			3
3: |       |--|            2			2
4: |       |---|           3			1
5: |       |--|            2
6: |       |---|           3
7: |       |---|           3*/
# include<stdio.h>
# include<stdlib.h>
int main()
{
    int n;
    int t;
    scanf("%d %d",&n,&t);
    int i,j,a;
    int w[n];
    int c[2];
    int min;
    for(i=0;i<n;i++)
    {
        scanf("%d",&w[i]);
    }
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&c[0],&c[1]);
        a=c[0];
        j=c[1];
        min=w[a];
        for(;a<=j;a++)
        {
            if(min>w[a])
            {
                min=w[a];
            }
        }
        printf("%d\n",min);
    }
    
}
