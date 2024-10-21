//WAP to add all digits of a number

#include <stdio.h>

int main()
{
	int n;
	printf("Enter Number: ");
	scanf("%d",&n);
	int s = 0,d;
	int c = n;
	
	while (c>0){
		d = c % 10;
		s = s + d;
		c = c / 10;
		
	}
	printf("Sum of digits of %d is %d",n,s);
}
