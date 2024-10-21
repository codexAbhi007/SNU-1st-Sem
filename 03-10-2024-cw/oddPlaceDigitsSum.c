//WAP to calculate sum of digits of odd place

#include <stdio.h>

int main(){
	int n,sum=0;
	printf("Enter Number: ");
	scanf("%d",&n);
	
	int place = 1,d;
	
	int c = n;
	while ( c > 0){
		d = c % 10;
		if (place % 2 != 0){
			sum = sum + d;
		}
		place += 1;
		c = c/10;
	}
	
	printf("Sum of digits at odd places is %d",sum);
}
