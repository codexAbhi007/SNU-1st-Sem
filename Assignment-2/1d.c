//with argument and with return value 
#include <stdio.h>
float add(float a,float b);
int main()
{
    float a,b;
    printf("Enter Num1: ");
    scanf("%f",&a);
    printf("Enter Num2: ");
    scanf("%f",&b); 
    float s = add(a,b);
    printf("%.2f + %.2f = %.2f",a,b,s);
    return 0;
}

float add(float a,float b)
{
    float sum = a + b;
    return sum;
}