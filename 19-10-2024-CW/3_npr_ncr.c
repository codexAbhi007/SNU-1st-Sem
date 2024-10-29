// Calculate nPr and nCr

#include <stdio.h>

float factorial(int num)
{
    float fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}

float nPr(int n, int r)
{
    return factorial(n) / factorial(n - r);
}

float nCr(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{
    int n, r;

    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter value of r: ");
    scanf("%d", &r);

    if (r > n)
    {
        printf("r should be less than or equal to n\n");
        return 1;
    }

    float perm = nPr(n, r);
    float comb = nCr(n, r);

    printf("nPr (Permutation) = %.2f\n", perm);
    printf("nCr (Combination) = %.2f\n", comb);

    return 0;
}
