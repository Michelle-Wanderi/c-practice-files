#include<stdio.h>
#include<math.h>
main()
{
    float a,b,c,d,e,m,V,SD;
    int N;

       a=12.5;
       b=14.5;
       c=13.2;
       d=8.95;
       e=17.89;
       N=5;
       m=(a+b+c+d+e)/N;

    V=(pow(a-m,2)+pow(b-m,2)+pow(c-m,2)+pow(d-m,2)+pow(e-m,2))/N;
   SD=sqrt(V);
  printf("For the following  sample data: %.1f,%.1f,%.1f,%.2f and %.2f,the mean=%f, the variance=%f, and standard deviation=%f", a,b,c,d,e,m,V,SD);
}


