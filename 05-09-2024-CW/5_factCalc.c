//calculate factorial of a number

#include <stdio.h>

int main(){
	int n,i=1;
	int fact1 = 1, fact2 = 1, fact3 = 1;
	
	printf("Enter number: ");
	scanf("%d",&n);
	
	if(n == 0 || n ==1){
		printf("Factorial is 1");
	}
	else{
		//using for loop
		for(i=1;i<=n;i++){
			fact1 = fact1*i;
		}
		
		i=1;
		//using while loop
		while(i<=n){
			fact2 = fact2*i;
			i++;
		}
		
		i=1;
		//using do while loop
		do{
			fact3 = fact3*i;
			i++;
		}while(i<=n);
		
		printf("Factorial using for loop: %d\n",fact1);
		printf("Factorial using while loop: %d\n",fact2);
		printf("Factorial using do while loop: %d",fact3);
	}
	
}
