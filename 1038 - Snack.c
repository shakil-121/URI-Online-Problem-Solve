//Using the following table, write a program that reads a code and the amount of an item. After, print the value to pay. This is a very simple program with the only intention of practice of selection commands.

#include<stdio.h> 
 int main() 
 {
    int x,y; 
    double total;
    scanf("%d%d",&x,&y); 
    if(x==1) 
      total=y*4.00; 
    else if(x==2) 
      total=y*4.50;
    else if(x==3) 
      total=y*5.00; 
    else if(x==4) 
      total=y*2.00;
    else 
      total=y*1.50; 
      printf("Total: R$ %.2lf\n",total); 

    return 0;   
 }
