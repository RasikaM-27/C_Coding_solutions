// BIRTHDAY CAKE CANDLES
//You are in charge of the cake for a child's birthday. You have decided the cake will have one candle for each year of their total age. They will only be able to blow out the tallest of the candles. Count how many candles are tallest.
# include<stdio.h>
# include<stdlib.h>
int main()
{
    int n,i;
    int c[100000];
    int count=0;
    scanf("%d",&n);
    for(i=0; i<n;i++){
        scanf("%d",&c[i]);
    }
    int max=c[0];
    for(i=0; i<n;i++)
    {
        if(max<c[i])
        {
            max=c[i];
            
        }
       
    }
    for(i=0;i<n;i++)
    {
        if(max==c[i])
        {
            count+=1;
        }
    }
   
    
    printf("%d",count);
}
