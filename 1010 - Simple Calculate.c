#include <stdio.h>

int main()
{
  int code1,code2,unit1,unit2;
  float prize1,prize2,VALOR;
  
  scanf("%d %d %f",&code1,&unit1,&prize1);
  scanf("%d %d %f",&code2,&unit2,&prize2);
  
  VALOR=((unit1*prize1)+(unit2*prize2));
  printf("VALOR A PAGAR: R$ %.2f\n",VALOR);
  return 0;
}
