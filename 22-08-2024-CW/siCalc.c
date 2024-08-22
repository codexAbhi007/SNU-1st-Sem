//Calculate SI

#include <stdio.h>

int main(){
	float principal,rate,time,si;
	
	printf("Enter Principal:\n");
	scanf("%f",&principal);
	
	printf("Enter Rate:\n");
	scanf("%f",&rate);
	
	printf("Enter Time in years:\n");
	scanf("%f",&time);
	
	si = (principal * rate * time)/100.0;
	
	printf("The SI is %.2f",si);
	
	return 0;
}
