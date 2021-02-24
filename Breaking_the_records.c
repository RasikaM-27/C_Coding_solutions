// BREAKING THE RECORDS
//Maria plays college basketball and wants to go pro. Each season she maintains a record of her play. She tabulates the number of times she breaks her season record for most points and least points in a game. Points scored in the first game establish her record for the season, and she begins counting from there.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s[1000];
    int i,n;
    int m[2]={0,0};
    int max;
    int min;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &s[i]);
    }
    max=s[0];
    min=s[0];
    for(i=0; i<n; i++)
    {
        if(s[i]>max)
        {
          m[0]+=1;
          max=s[i];
        }
        else if(s[i]<min)
        {
            m[1]+=1;
            min=s[i];
        }
    }
    
    printf("%d %d",m[0],m[1]);
    
}
