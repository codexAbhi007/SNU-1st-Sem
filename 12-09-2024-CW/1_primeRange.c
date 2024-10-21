//C program to take a range and print all prime numbers within that range


#include <stdio.h>
#include <math.h>
int main() {
    int range;
    printf("Enter Range: ");
    scanf("%d",&range);
    int c = 0;
    int i,j;
    int isPrime = 0;
    for (i = 2; i <= range; i++)
    {
        for (j = 1; j<=sqrt(i);j++){
            if (i%j == 0)
                c = c + 1;
        }
        if (c == 1){
            isPrime = 1;
            printf("%d\n",i);
        }
        c = 0;
    }
    return 0;
}