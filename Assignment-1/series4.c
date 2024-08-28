// 1+1/2+1/3+.....+1/N

#include <stdio.h>

int main() {
    int n;
    float s = 0.0;
    printf("Enter Number of Terms: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        s = s + 1.0/i;
    }
    printf("%.2f",s);
    
    return 0;
}