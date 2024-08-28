#include <stdio.h>
#include <math.h>  

int main() {
    int n, i;
    float sum = 0.0;

    printf("Enter Number of Terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        int term = 2 * i - 1;  
        sum += pow(term, 2) / pow(term, 3); 
    }

    printf("Sum: %.4f\n", sum);  

    return 0;
}
