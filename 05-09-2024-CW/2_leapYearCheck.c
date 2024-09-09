//C program that will check if a given year is leap year or not

#include <stdio.h>

int main(){
	int year,isleap = 0;
	printf("Enter year: ");
	scanf("%d",&year);
	
	if(year % 4 == 0){
		if ( year % 100 == 0){
			if ( year % 400 == 0){
				isleap = 1;
			}
			else{
				isleap = 0;
			}
		}
		else{
			isleap = 1;
		}
	}
	else{
		isleap = 0;
	}
	if (isleap){
		printf("%d is a leap year",year);
	}else{
		printf("%d is not a leap year",year);
	}
	
	return 0;
}
