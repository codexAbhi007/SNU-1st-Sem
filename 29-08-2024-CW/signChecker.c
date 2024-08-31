//Program that identify +ve/-ve/zero

#include <stdio.h>

int main(){
	float n;
	printf("Enter number: ");
	scanf("%f",&n);
	
	if (n == 0.0)
	{
		printf("Number is zero");
	}
	else if(n>0.0)
	{
		printf("%.2f is Positive",n);
	}
	else {
		printf("%.2f is Negative",n);
	}
	return 0;
}
