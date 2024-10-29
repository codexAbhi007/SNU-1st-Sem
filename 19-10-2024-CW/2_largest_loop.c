//Largest among 10 numbers using loop

#include <stdio.h>

int main() {
    int i, num, largest;

    printf("Enter number: ");
    scanf("%d", &largest); 

    for(i = 2; i <= 10; i++) {
        printf("Enter number: ");
        scanf("%d", &num);
        if(num > largest) {
            largest = num;
        }
    }

    printf("The largest number is: %d\n", largest);

    return 0;
}
