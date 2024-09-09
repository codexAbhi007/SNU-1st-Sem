//C rogram that will check if a no. is divisible by both 3 and 7

#include <stdio.h>

int main(){
	int n;
	printf("Enter Number:");
	scanf("%d",&n);
	if (n%3 == 0 && n%7 == 0){
		printf("%d is divisible by both 3 and 7",n);
		
	}else
	{
		printf("%d is not divisible by both 3 and 7",n);
		
	}
	return 0;
}
