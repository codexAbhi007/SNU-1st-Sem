//C program for the input row number 5

#include <stdio.h>

int main(){
	int n=0,i,j; 
	printf("Enter no of rows: ");
	scanf("%d",&n);
	
	for (i=1; i<=n; i++)
	{
		for(j = 1 ; j<=i; j++)
		{
			printf("*");
		}
		printf("\n");	
	}
	
	printf("\n");
	
	
}
