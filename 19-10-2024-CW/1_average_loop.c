//calculate average of n numbers using loop only
#include <stdio.h>

int main() {
    int n;float s = 0;
    printf("Enter total numbers: ");
    scanf("%d",&n);
    int i;
    for (i=1;i<=n;i++)
    {
        int num;
        printf("Enter Num: ");
        scanf("%d",&num);
        s = s + num;
    }
    float avg = s/n;
    printf("%.2f",avg);
    return 0;
}