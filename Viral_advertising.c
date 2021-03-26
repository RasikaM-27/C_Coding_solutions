// VIRAL ADVERTISING
//HackerLand Enterprise is adopting a new viral advertising strategy. When they launch a new product, they advertise it to exactly 5 people on social media.

//On the first day, half of those 5 people (i.e.,floor(5/2)=2 ) like the advertisement and each shares it with 3 of their friends. At the beginning of the second day, floor(5/2)*3=2*3=6 people receive the advertisement.

//Each day, floor(recipients/2)  of the recipients like the advertisement and will share it with 3 friends on the following day. Assuming nobody receives the advertisement twice, determine how many people have liked the ad by the end of a given day, beginning with launch day as day 1 .

//Example

//Day Shared Liked Cumulative
//1      5     2       2
//2      6     3       5
//3      9     4       9
//4     12     6      15
//5     18     9      24
# include<stdio.h>
# include<stdlib.h>
int main()
{
    int n;
    int i;
    int liked[50];
    int shared[50];
    int cumulative[50]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if (i==0)
        {
           shared[0] = 5;
           liked[0]=(5/2);
           cumulative[0]=liked[0];
        }
        else
        {
            shared[i]=(liked[i-1]*3);
            liked[i]=(shared[i]/2);
            cumulative[i]=liked[i]+cumulative[i-1];
        }
    }
    printf("%d",cumulative[n-1]);
}
