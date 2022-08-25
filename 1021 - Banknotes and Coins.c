#include<stdio.h>
int main()
{
   double x;
   int aar[12]={10000,5000,2000,1000,500,200,100,50,25,10,5,1};
   int bbr[12],i,k,n;
   scanf("%lf",&x);
   n=x*100;
   for (i=0;i<12;i++)
    {
        bbr[i] = n / aar[i];
        n=n%aar[i];
    }
    printf("NOTAS:\n");
    for(k=0;k<6;k++)
    {
        printf("%d nota(s) de R$ %d.00\n",bbr[k],(aar[k]/100));
    }
    printf("MOEDAS:\n");
    for(k=6;k<12;k++)
    {
        printf("%d moeda(s) de R$ %0.2f\n",bbr[k],(aar[k]/100.0));
    }
   return 0;
}

