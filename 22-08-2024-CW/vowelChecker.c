//Input an alphabet and check if it is vowel or not 

#include <stdio.h>

int main(){
	char c;
	printf("Enter Character: \n");
	scanf("%c",&c);
	
	
	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' 
	|| c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' )
	{
		printf("It is a vowel");
	}
	else
	{
		printf("It is a consonant");
	}
}
