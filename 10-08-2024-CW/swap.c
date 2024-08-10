//Swap two Numbers using third variable
#include <stdio.h>

int main(){
	int a,b,t;
	printf("Enter first number a :\n");
	scanf("%d",&a);
	printf("Enter the second number b :\n");
	scanf("%d",&b);
	
	t = a;
	a = b;
	b = t; 
	
	printf("a = %d \nb = %d",a,b);
	return 0;
}
