#include <stdio.h>

int main()
{
    float a,b,result;
    
    char o[4] = {+,-,*,/};

        printf("Enter first number:");
        scanf("First number is, %f",&a);

        printf("Enter second number:");
        scanf("Second number is, %f",&b);

        printf("Enter operator of your choice:");
        scanf("Operator is, %c",&o);

        switch(o[4]){
            case o[0]:
                result = a + b;
                printf("The result is: %f",result);
            break;

            case o[1]:
                result = a - b;
                printf("The result is: %f",result);
            break;

            case o[2]:
                result = a * b;
                printf("The result is: %f",result);
            break;

            case o[3]:
                result = a / b;
                printf("The result is: %f",result);
            break;

            default:
            printf("Invalid");

        }


}