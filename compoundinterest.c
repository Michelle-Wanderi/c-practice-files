#include<stdio.h>
#include <math.h>
int main()
{
 int a, r, n, u; 
a=4;
r=3;
n=20;
for(n=1;n<=20;n++)
{
    u = a * (pow(r,(n-1)));
    printf("% i\t\\t%d\n",n,u );
}
}