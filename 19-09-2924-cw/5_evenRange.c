//C pogram to print all the even number/prime number withing a range

#include <stdio.h>
int main()
{
	int n,i=1; 
	printf("Enter Range: ");
	scanf("%d",&n);
	for (i = 1; i<=n; i++){
		if (i%2==0){
			printf("%d\n",i);
			
		}
	}
}
