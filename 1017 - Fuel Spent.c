#include <stdio.h>

int main()
{
  int t,s,d;
  double fuelspant;
  scanf("%d%d",&t,&s);
  d = t*s;
  fuelspant = d/12.0;
  printf("%.3lf\n",fuelspant);
  return 0;
}
