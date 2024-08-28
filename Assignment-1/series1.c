// 1+2+3+.....+N

#include <stdio.h>

int main() {
    int n;
    int s = 0;
    printf("Enter Number of Terms: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        s = s + i;
    }
    printf("%d",s);
    
    return 0;
}