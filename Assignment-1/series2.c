// 1^2+2^2+3^2+.....+N terms

#include <stdio.h>
#include <math.h>
int main() {
    int n;
    int s = 0;
    printf("Enter Number of Terms: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        s = s + pow(i,2);
    }
    printf("%d",s);
    
    return 0;
}