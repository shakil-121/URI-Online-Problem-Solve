#include <stdio.h>

int main()
{
  char name[50];
  double fixd_salary,bonus,TOTAL;
  scanf("%s",&name);
  scanf("%lf%lf",&fixd_salary,&bonus);
  TOTAL = fixd_salary+(bonus/100*15);
  printf("TOTAL = R$ %.2lf\n",TOTAL);
  return 0;
}
