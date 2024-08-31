//To find out are of triangle 

#include <stdio.h>
#include <math.h>

int main(){
	float a,b,c,s,area;
	printf("Enter three numbers:\n");
	scanf("%f%f%f",&a,&b,&c);
	
	if(a == 0 || b == 0 || c == 0 || a < 0 || b < 0 || c < 0){
		printf("Length cannot be 0 or -ve!");
	
	}
	
	else if(a+b>c && b+c>a && a+c>b){
		printf("Valid Triangle!\n");
		s = (a+b+c)/2.0;
		area = sqrt(s*(s-a)*(s-b)*(s-c));
		printf("Area of Triangle with sides %.2f, %.2f and %.2f is %.2f",a,b,c,area);
	}
	else{
		printf("Invalid Triangle");
	}
	
	return 0;
}
