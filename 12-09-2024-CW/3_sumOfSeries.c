//C program to calculate the sum of series
// 1 + (1/2) + (1/3) + ... n terms

#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }
    printf("Sum of the series is: %.2f\n", sum);
    return 0;
}
