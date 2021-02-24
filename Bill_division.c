// BILL DIVISION
//Two friends Anna and Brian, are deciding how to split the bill at a dinner. Each will only pay for the items they consume. Brian gets the check and calculates Anna's portion. You must determine if his calculation is correct.

//For example, assume the bill has the following prices:bill[2,4,6] . Anna declines to eat item k=bill[2] which costs 6. If Brian calculates the bill correctly, Anna will pay(2+4)/2=3. If he includes the cost of bill[2] , he will calculate(2+4+6)/2=6. In the second case, he should refund 3 to Anna.
# include<stdio.h>
#include<stdlib.h>
int main()
{
    long int n,k,z;
    int i;
    long int sum=0;
    long int bill[100000];
    long int b_charged;
    long int b_real=0;
    scanf("%ld %ld",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&bill[i]);
    }
    scanf("%ld",&b_charged);
    for(i=0;i<n;i++)
    {
        sum+=bill[i];
    }
    b_real=((sum-bill[k])/2);
    if(b_real==b_charged)
    {
        printf("Bon Appetit");
    }
    else if(b_real!=b_charged)
    {
       z=b_charged-b_real;
       printf("%ld",z);
    }
}

