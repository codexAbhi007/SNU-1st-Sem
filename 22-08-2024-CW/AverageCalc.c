//Find average of three numbers

#include <stdio.h>

int main(){
	float a,b,c,avg;
	
	printf("Enter Three Numbers: \n");
	scanf("%f%f%f",&a,&b,&c);
	
	avg = (a+b+c)/3.0;
	
	printf("Average of numbers %.2f %.2f and %.2f is %.2f",a,b,c,avg);
	
	return 0;		
}
