//with argument and without return value 
#include <stdio.h>
void add(float a,float b);
int main()
{
    float a,b;
    printf("Enter Num1: ");
    scanf("%f",&a);
    printf("Enter Num2: ");
    scanf("%f",&b);
    add(a,b);
    return 0;
}

void add(float a, float b)
{
    printf("%.2f + %.2f = %.2f",a,b,a+b);
}