//Program to find out smallest among three numbers 

#include <stdio.h>

int main(){
	float a,b,c,smallest;
	printf("Enter three numbers:\n");
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	
	if (a < b && a < c){
		smallest = a;
	}
	else if (b < a && b < c){
		smallest = b;
	}
	else{
		smallest = c;
	}
	printf("Smallest among %.2f %.2f and %.2f is %.2f",a,b,c,smallest);
}
