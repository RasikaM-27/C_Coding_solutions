// DAY OF THE PROGRAMMER
//Marie invented a Time Machine and wants to test it by time-traveling to visit Russia on the Day of the Programmer (the 256th day of the year) during a year in the inclusive range from 1700 to 2700.

//From 1700 to 1917, Russia's official calendar was the Julian calendar; since 1919 they used the Gregorian calendar system. The transition from the Julian to Gregorian calendar system occurred in 1918, when the next day after January 31st was February 14th. This means that in 1918, February 14th was the 32nd day of the year in Russia.

//In both calendar systems, February is the only month with a variable amount of days; it has 29 days during a leap year, and 28 days during all other years. In the Julian calendar, leap years are divisible by 4; in the Gregorian calendar, leap years are either of the following:

//Divisible by 400.
//Divisible by 4 and not divisible by 100.
//Given a year,y, find the date of the 256th day of that year according to the official Russian calendar during that year. Then print it in the format dd.mm.yyyy, where dd is the two-digit day, mm is the two-digit month, and yyyy is y.

//For example, the given year = 1984. 1984 is divisible by 4, so it is a leap year. The 256th day of a leap year after 1918 is September 12, so the answer is 12.09.1984 .
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int year;
    int i,j;
    int l;
    int d;
    int z=0;
    scanf("%d",&year);
    if ((1700<=year)&&(year<=1918))
    {
        for(i=0;(i<8);i++)
        {
            if(i==1)
            { 
                l=year%4;
                if(l==0)
                {
                    z+=29;
                }
                else {
                    if(year==1918)
                    {
                        z+=15;
                    }
                    else{
                        z+=28;
                    }
                }
            }
            else if(i==7)
            {
                z+=31;
            }
            else if((i%2)==0)
            {
                z+=31;
            }
            else if((i%2)!=0)
            {
                z+=30;
            }
        } 
    }
    else if((1919<=year)&&(year<=2700))
    {
        for(i=0;(i<8);i++)
        {
            if(i==1)
            { 
                l=(year%400==0)||((year%4==0)&&(year%100!=0));
                if(l==1)
                {
                    z+=29;
                }
                else {
                    z+=28;
                }
            }
            else if(i==7)
            {
                z+=31;
            }
            else if((i%2)==0)
            {
                z+=31;
            }
            else if((i%2)!=0)
            {
                z+=30;
            }
        }
    }
    d=256-z;
    i=i+1;
    printf("%d.0%d.%d",d,i,year);
}
