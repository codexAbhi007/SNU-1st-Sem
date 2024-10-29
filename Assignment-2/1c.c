//without argument and with return value 
#include <stdio.h>
float add();
int main()
{
    float sum = add();
    printf("sum is %.2f",sum);
    return 0;
}

float add()
{
    float a,b;
    float sum = 0;
    printf("Enter Num1: ");
    scanf("%f",&a);
    printf("Enter Num2: ");
    scanf("%f",&b);
    sum = a+b;
    return sum;
    
}