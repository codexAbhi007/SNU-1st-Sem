#include <stdio.h>
int main(){
	float a,b;
	printf("Enter first Number a:\n");
	scanf("%f",&a);
	printf("Enter second Number b:\n");
	scanf("%f",&b);
	printf("%f + %f = %.2f\n",a,b,a+b);
	printf("%f - %f = %.2f\n",a,b,a-b);
	printf("%f * %f = %.2f\n",a,b,a*b);
	printf("%f / %f = %.2f\n",a,b,a/b);
	return 0;
}
