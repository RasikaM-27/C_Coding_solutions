// STAIRCASE
//Staircase detail

//This is a staircase of size : N=4

  // #
  //##
 //###
//####
//Its base and height are both equal to N . It is drawn using # symbols and spaces. The last line is not preceded by any spaces.

//Write a program that prints a staircase of size N .
# include <stdio.h>
# include <stdlib.h>
int main()
{
    int i,k,l,n;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        for(k=1; k<n-i;k++)
        {
            printf(" ");
        }
        for(l=0; l<=i; l++)
        {
            printf("#");
        }
        printf("\n");
    }
}
