#include<stdio.h>
int main()
{
      float x,sum,av;

      sum=(1+2+3+4+5+6+7+8+9+10)*8+(2+3+4+5+6+7+8+9+10)+(1+2+3+4+5+6+7+8+9);
      x=100-2;
      av=sum/x;
      printf("For all natural numbers between 1 and 100, their sum=%.0f and their average=%.2f",sum,av);
}