#include<stdio.h>
 #include<math.h>
int main()
 {
   double a,b,c,x1,x2,d;
   scanf("%lf %lf %lf",&a,&b,&c);
   d = sqrt ((b*b) - (4 * a * c));
   if(((b*b)-(4*a*c))<0 || (a==0))
      printf("Impossivel calcular\n");
   else
        {
           x1=((-b+d)/(2*a));
           x2=((-b-d)/(2*a));
           printf("R1 = %0.5lf\n",x1);
           printf("R2 = %0.5lf\n",x2);
        }

    return 0;
}
