#include <stdio.h>

int main()
{
  int N,H;
  double perhour,SALARY ;
  scanf("%d%d",&N,&H);
  scanf("%lf%",&perhour);
  SALARY = H*perhour;
  printf("NUMBER = %d\n",N);
  printf("SALARY = U$ %.2lf\n",SALARY);
  return 0;
}
