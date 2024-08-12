//Celcius to Fahrenheit Conversion

#include <stdio.h>
#include <stdlib.h>

int main(){
//	int c;
	float c,f;
	printf("Enter Temperature in Celcius: ");
	scanf("%f", &c);
	//f = 1.8*c+32;
	f=(9.0/5.0)*c+32;
	printf("The Temperature in Fahrenheit is: %.2f F",f);
	
	return 0;
}
