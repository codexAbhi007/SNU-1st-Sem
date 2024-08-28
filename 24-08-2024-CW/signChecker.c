//To check a number is +ve -ve or 0

#include <stdio.h>

int main() {
    float n;
    printf("Enter Number: ");
    scanf("%f",&n);

    if (n == 0)
        printf("Number is 0");
    else if (n > 0)
        printf("%.2f is Positive",n);
    else 
        printf("%.2f is Negative",n);
    
    return 0;
}