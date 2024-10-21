//C program to check palindrome

#include <stdio.h>

int main()
{
	int n,r=0,d;
	printf("Enter Number: ");
	scanf("%d",&n);
	int c = n;
	while (c > 0){
		d = c%10;
		r = r*10 + d;
		c = c/10;
	}
	if (r == n)
		printf("%d is a palindrome number",n);
	else
		printf("%d is not a palindrome number",n);
}
