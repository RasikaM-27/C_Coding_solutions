/* NUMBER LINE JUMPS
Complete the function kangaroo in the editor below.

kangaroo has the following parameter(s):

int x1, int v1: starting position and jump distance for kangaroo 1
int x2, int v2: starting position and jump distance for kangaroo 2
Returns

string: either YES or NO
Input Format

A single line of four space-separated integers denoting the respective values of x1,v1 , x2, and v2.*/
# include<stdio.h>
# include<stdlib.h>
int main()
{
    int x1,v1;
    int x2,v2;
    int flag=0;
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
    int n=0;
    while(n<10000)
    {
        if((x1+n*v1)==(x2+n*v2))
        {
            flag=1;
            break;
        }
        n++;
    }
    if(flag==0)
    {
        printf("NO");
    }
    else 
    {
        printf("YES");
    }
    
    
}

