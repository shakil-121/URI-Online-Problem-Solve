#include <stdio.h>

int main()
{
  double A,B,C,tri,cir,sqr,rec,tra,pi;
  pi=3.14159;
  scanf("%lf %lf %lf",&A,&B,&C);
  tri = 0.5*A*C;
  cir = pi*(C*C);
  tra = 0.5*(A+B)*C;
  sqr = B*B;
  rec = A*B;
  printf("TRIANGULO: %.3lf\n",tri);
  printf("CIRCULO: %.3lf\n",cir);
  printf("TRAPEZIO: %.3lf\n",tra);
  printf("QUADRADO: %.3lf\n",sqr);
  printf("RETANGULO: %.3lf\n",rec);
  return 0;
}
