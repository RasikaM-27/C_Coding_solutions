# include<stdio.h>
# include<stdlib.h>
int main()
{
    int  t,i;
    long int b, w;
    long int  bc, wc, z;
    long int Total;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%ld %ld",&b,&w);
        scanf("%ld %ld %ld", &bc,&wc,&z);
        if(bc>=(wc+z))
        {
            Total=(b*(wc+z))+(w*wc);
        }
        else if(wc>=(bc+z))
        {
            Total=(b*bc)+(w*(bc+z));
        }
        else
        {
            Total=(b*bc)+(w*wc);
        }
        printf("%ld\n", Total);
        
    }
}

