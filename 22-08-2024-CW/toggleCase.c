#include <stdio.h>
#include <ctype.h>

int main() {
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);


    if (islower(c)) {
  
        c = toupper(c);
        printf("Converted to uppercase: %c\n", c);
    }

    else if (isupper(c)) {

        c = tolower(c);
        printf("Converted to lowercase: %c\n", c);
    } else {
        printf("The character is neither uppercase nor lowercase.\n");
    }

    return 0;
}

