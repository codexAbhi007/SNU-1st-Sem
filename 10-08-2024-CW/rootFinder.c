//roots of Quadratic Equation

#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,r1,r2;
	printf("Enter a:\n");
	scanf("%f",&a);
	printf("Enter b:\n");
	scanf("%f",&b);
	printf("Enter c:\n");
	scanf("%f",&c);
	
	r1 = (-b + (sqrt(pow(b,2)-4.0*a*c)))/2.0*a;
	r2 = (-b - (sqrt(pow(b,2)-4.0*a*c)))/2.0*a;
	
	printf("Root 1 : %.2f\n",r1);
	printf("Root 2 : %.2f",r2);
	
	return 0;
}
