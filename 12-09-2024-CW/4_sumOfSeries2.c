//C program to calculate the sum of series
// 1 + (1/2!) + (1/3!) + ... n terms

#include <stdio.h>

int main() {
    int n;
    float sum = 1.0, term, fact;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        fact = 1.0;  
        for (int j = 1; j <= i; j++) {
            fact *= j;
        }

        term = 1.0 / fact;
        sum += term;
    }

    printf("The sum of the series is: %.2f\n", sum);

    return 0;
}
