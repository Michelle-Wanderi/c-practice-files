#include<stdio.h>
#include<math.h>

int main()
{
    int n,count;
    float A,P,r,t,R,N,b,c;

    P=1500.00;
    r=(4.3)/100.0;
    n=4.0;
    t=1.0/2.0;
    R=r/n;
    N=n*t;
    A=P*pow(1+R,N);
    printf("The balance after 6 months will be $%f \n", A);

    for(count=0;count<=6;count++)
    {
        printf("\t%i month(s)| $%f \n",count,b);
        b+=A/6;
    }
}