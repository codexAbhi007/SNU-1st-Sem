#include <stdio.h>

int main() {
    int n; 
    printf("Enter Decimal Number: ");
    scanf("%d", &n);
    
    if (n == 0) {
        printf("0\n");
        return 0;
    }


    int c = n;
    int binaryDigits = 0;  
    while (c > 0) {
        binaryDigits++;
        c = c / 2;
    }

   
    for (int i = binaryDigits - 1; i >= 0; i--) {
        int bit = (n >> i) & 1;  
        printf("%d", bit);
    }
    
    printf("\n");
    return 0;
}
