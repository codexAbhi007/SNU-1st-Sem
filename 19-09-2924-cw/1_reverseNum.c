//C program to reverse a number

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
	printf("Reversed Number: %d",r);
	return 0;
}
