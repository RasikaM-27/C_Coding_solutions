// COUNTING VALLEYS
//An avid hiker keeps meticulous records of their hikes. During the last hike that took exactly STEPS  steps, for every step U it was noted if it was an uphill, , or a downhill, D step. Hikes always start and end at sea level, and each step up or down represents a 1 unit change in altitude. We define the following terms:

//A mountain is a sequence of consecutive steps above sea level, starting with a step up from sea level and ending with a step down to sea level.
//A valley is a sequence of consecutive steps below sea level, starting with a step down from sea level and ending with a step up to sea level.
//Given the sequence of up and down steps during a hike, find and print the number of valleys walked through.
# include<stdio.h>
# include<stdlib.h>
int main()
{
    long int n;
    long int i;
    int sea_level =0;
    int count=0;
    char a[1000000];
    scanf("%ld",&n);
    for(i=0;i<=n;i++)
    {
        scanf("%c",&a[i]);
    }
    for (i=0;i<=n;i++)
    {
        if(a[i]=='U')
        {
           sea_level=sea_level+1;
                if (sea_level==0)
                {
                    count=count+1;
                }
            
        
        }
        if(a[i]=='D')
        {
            sea_level=sea_level-1;
        }
        
    }
    printf("%d", count);
}

