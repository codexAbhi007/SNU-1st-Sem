//Find digit of unit place of a given number

#include <stdio.h>

int main(){
	int n; 
	printf("Enter Number: ");
	scanf("%d",&n);
	
	int unit_place = n%10;
	
	printf("The Unit place of number %d is %d",n,unit_place);
	
	return 0;
}
