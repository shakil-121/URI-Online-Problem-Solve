#include <stdio.h>

int main()
{
  double R,pi=3.14159,VOLUME;
  scanf("%lf",&R);
  VOLUME = (4/3.0)*pi*R*R*R;
  printf("VOLUME = %.3lf\n",VOLUME);
  return 0;
}
