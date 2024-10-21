//WAP to check for perfect number

#include <stdio.h>
int main()
{
	int n,s=0,i;
	printf("Enter Number: ");
	scanf("%d",&n);
	

	for (i = 1; i<n; i++){
		if (n%i == 0)
			s = s + i;
	}
	if (s == n)
		printf("%d is a pefect Number",n);
	else 
		printf("%d is not a pefect Number",n);
	
}
