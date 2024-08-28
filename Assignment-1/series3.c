// 1/1!+2/2!+3/3!+.....+N/N! terms

#include <stdio.h>

int main() {
    int n, i, j;
    float s = 0.0, p = 1.0;

    printf("Enter Number of Terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        p = 1.0;  

        for (j = 1; j <= i; j++) {
            p = p * j;
        }

        s = s + (i / p);
    }

    printf("Sum: %.2f\n", s);

    return 0;
}
