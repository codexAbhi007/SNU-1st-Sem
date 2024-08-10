//Swap two Numbers without uing third variable
#include <stdio.h>

int main(){
	int a,b;
	printf("Enter first number a :\n");
	scanf("%d",&a);
	printf("Enter the second number b :\n");
	scanf("%d",&b);
	
	a = a+b;
	b = a-b;
	a = a-b;
	 
	printf("a = %d \nb = %d",a,b);
	return 0;
}
