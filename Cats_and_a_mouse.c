// CATS AND A MOUSE
//Two cats and a mouse are at various positions on a line. You will be given their starting positions. Your task is to determine which cat will reach the mouse first, assuming the mouse does not move and the cats travel at equal speed. If the cats arrive at the same time, the mouse will be allowed to move and it will escape while they fight.

//You are given q queries in the form of x ,y and z  representing the respective positions for cats A and B, and for mouse C .
#include <stdio.h>
#include <stdlib.h>
 int main()
 {
    int i,j,n;
    scanf("%d", &n);
    int a[100][3];
    int d[100][2];
    for(i=0;i<n;i++)
    {
        for(j=0; j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            d[i][j] = abs((a[i][j]-a[i][2]));
        }
    }
    for(i=0,j=0;i<n;i++)
    {
        if(d[i][j]>d[i][j+1])
        {
            printf("Cat B\n");
        }
        else if(d[i][j]<d[i][j+1])
        {
            printf("Cat A\n");
        }
        else if(d[i][j]==d[i][j+1])
        {
            printf("Mouse C\n");
        }
    }
    
 }
