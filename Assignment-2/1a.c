//without argument and without return value 
#include <stdio.h>
void add();
int main()
{
    add();
    return 0;
}

void add()
{
    float a,b;
    printf("Enter Num1: ");
    scanf("%f",&a);
    printf("Enter Num2: ");
    scanf("%f",&b);

    printf("%.2f + %.2f = %.2f",a,b,a+b);
}