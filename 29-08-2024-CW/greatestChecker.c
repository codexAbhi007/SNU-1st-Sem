//Program to find out largest among three numbers 

#include <stdio.h>

int main(){
	float a,b,c,greatest;
	printf("Enter three numbers:\n");
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	
	if (a > b && a > c){
		greatest = a;
	}
	else if (b > a && b > c){
		greatest = b;
	}
	else{
		greatest = c;
	}
	printf("Greatest among %.2f %.2f and %.2f is %.2f",a,b,c,greatest);
}
