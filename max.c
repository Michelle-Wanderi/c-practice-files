//A program that determines the maximum of 4 numbers
#include <stdio.h>

int main()
{
    int num1,num2,num3,num4;

    printf("Enter num1:");
    scanf("%d",&num1);

     printf("Enter num2:");
     scanf("%d",&num2);

     printf("Enter num3:");
     scanf("%d",&num3);

     printf("Enter num4:");
     scanf("%d",&num4);

    if(num1 > num2 && num2 > num3 && num3 > num4)
    {
    printf("Num 1 is the greatest number, %d");
    }
    else if( num2 < num1 && num2 > num3 && num3 > num4)
    {
    printf("Num 2 is the greatest number");
    }
     else if( num1 < num2 && num2 < num3 && num3 > num4)
     {
    printf("Num 3 is the greatest number");
     }
     else if( num1 > num2 && num2 > num3 && num3 > num4)
     {
    printf("Num 4 is the greatest number");
     }
    else
    {
    printf("There is no greater number");
    }
ext install Blackboxapp.blackbox
