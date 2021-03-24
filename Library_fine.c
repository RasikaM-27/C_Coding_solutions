// LIBRARY FINE
//Your local library needs your help! Given the expected and actual return dates for a library book, create a program that calculates the fine (if any). The fee structure is as follows:

//If the book is returned on or before the expected return date, no fine will be charged (i.e.: fine=0) .
//If the book is returned after the expected return day but still within the same calendar month and year as the expected return date, fine=15*(no of days late) .
//If the book is returned after the expected return month but still within the same calendar year as the expected return date, the fine=500*(no of months late) .
//If the book is returned after the calendar year in which it was expected, there is a fixed fine of 10000 .
//Charges are based only on the least precise measure of lateness. For example, whether a book is due January 1, 2017 or December 31, 2017, if it is returned January 1, 2018, that is a year late and the fine would be 10000.
# include<stdio.h>
# include<stdlib.h>
 int main()
 {
     int d1, d2;
     int m1, m2;
     int y1, y2;
     int x;
     int fine=0;
     scanf("%d %d %d", &d1,&m1,&y1);
     scanf("%d %d %d", &d2,&m2,&y2);
     if(y1<=y2)
     {
         if(m1<=m2)
         {
             if(d1<=d2)
             {
                 printf("%d", fine);
             }
             else if((d1>d2)&&((m2>m1)||(y2>y1)))
             {
                 printf("%d", fine);
             }
             else 
             {
                 x= d1-d2;
                 fine = 15 * x;
                 printf("%d", fine);
             }
         }
         else if((d1>d2)&&((m2>m1)||(y2>y1)))
        {
             printf("%d", fine);
        }
         else
         {
             x= m1-m2;
             fine = 500 * x;
             printf("%d", fine);
             
         }
     }
     else
     {
         printf("%d",10000);
     }
     
     
 }
