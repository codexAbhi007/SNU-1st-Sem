//C program to print fibonacci series upto n terms

#include <stdio.h>

int main() {
    int a = 0, b = 1, c = 0;
    int n; 
    printf("Enter number of terms: ");
    scanf("%d",&n);
    int i;
    printf("%d %d ",a,b);
    for (i = 1;i<=n;i++){
        
        c = a + b;
        printf("%d ",c);
        a = b; 
        b = c;
        
    }
    return 0;
}