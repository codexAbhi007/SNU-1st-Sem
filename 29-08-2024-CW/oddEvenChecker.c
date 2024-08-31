//Program that identify odd/even/zero

#include <stdio.h>

int main(){
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	
	if (n == 0){
		printf("Number is zero");
	}
	else if( n % 2 == 0){
		printf("%d is Even",n);
	}
	else{
		printf("%d is Odd",n);
	}
	return 0;     
}
