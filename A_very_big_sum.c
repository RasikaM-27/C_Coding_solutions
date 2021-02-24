// A VERY BIG SUM
//Complete the aVeryBigSum function in the editor below. It must return the sum of all array elements.
#include <stdio.h>
#include <stdlib.h>
 int main()
 {
     long signed int ar[10];
     int i;
     long signed int sum=0;
     int n;
     scanf("%d", &n);
     for (i=0; i<n; i++)
     {
         scanf("%ld", &ar[i]);
         sum+=ar[i];
     }
     printf("%ld", sum);
 }
