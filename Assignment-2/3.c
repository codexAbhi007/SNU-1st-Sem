#include <stdio.h>

int fact(int n);

int main() {
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);
    int factorial = fact(num);
    if (factorial) printf("Factorial of %d is %d",num,factorial);
    return 0;
}

int fact(int n)
{
    int p = 1;
    int c = n;
    if (c==1 || c==0) return 1;
    else if (c < 0)
    {
        printf("Invalid");
        return 0;
    }
    else{
        while(c > 0)
        {
            p = p*c;
            c=c-1;
        }
        return p;
    }
    
}