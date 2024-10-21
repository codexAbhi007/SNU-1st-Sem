//WAP to check for Duck Number
#include <stdio.h>

int main()
{
	int n,isDuck = 0,d;
	printf("Enter Number: ");
	scanf("%d",&n);
	
	int c = n;
	while(c > 0)
	{
		d = c % 10;
		if (d == 0){
			isDuck = 1;
			break;
		};
		c = c / 10;
	}
	if (isDuck)
		printf("%d is a Duck Number",n);
	else
		printf("%d is not a Duck Number",n);
}
