// Uppercase and Lowercase

#include <stdio.h>
int main(){
	char val;
	printf("Enter Character: ");
	scanf("%c",&val);
	
	int ascii = val + 32;
	
	printf("Lowecase is %c",ascii);
	return 0;
}
