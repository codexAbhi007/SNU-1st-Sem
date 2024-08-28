//To check a number is even odd or 0

#include <stdio.h>

int main() {
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);

    if (n == 0)
        printf("Number is 0");
    else if(n % 2 == 0)
        printf("%d is Even Number",n);
    else
        printf("%d is Odd Number",n);
    return 0;
}