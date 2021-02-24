// ANGRY PROFESSOR
//A Discrete Mathematics professor has a class of students. Frustrated with their lack of discipline, the professor decides to cancel class if fewer than some number of students are present when class starts. Arrival times go from on time (arrival time<=0) to arrived late (arrivaltime>0).

//Given the arrival time of each student and a threshhold number of attendees, determine if the class is cancelled.
# include<stdio.h>
# include<stdlib.h>
int main()
{
    int t;
    long int i,j;
    long signed int a[11][1001];
    long int n[11];
    long int k[11];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%ld %ld",&n[i],&k[i]);
        for(j=1;j<=n[i];j++)
        {
            scanf("%ld",&a[i][j]);
        }
    }
    for(i=1;i<=t;i++)
    {
        long int count=0;
        for(j=1;j<=n[i];j++)
        {
            if(a[i][j]<=0)
            {
                count=count+1;
            }
            
        }
        if(count<k[i])
            {
                printf("YES\n");
            }
        else if(count>=k[i])
            {
               printf("NO\n");
            }
    }
}

