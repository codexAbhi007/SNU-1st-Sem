//WAP to print pattern1 (Right pyramid)

#include <stdio.h>

int main() {
    int rows,r1,r2,i,j;
    printf("Enter no of Rows: ");
    scanf("%d",&rows);
    r1 = rows/2 + 1;
    r2 = rows-r1;

    for(i=1;i<=r1;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(i=1;i<=r2;i++)
    {
        for(j=1;j<=r2-i+1;j++)
        {
            printf("*");;
        }
        printf("\n");
    }
    return 0;
}