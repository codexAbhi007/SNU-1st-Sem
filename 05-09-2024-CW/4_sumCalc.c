//C program to calculate sum 1+2+3+...+N terms

#include <stdio.h>

int main(){
	int n,i=1;
	int s1 = 0,s2 = 0,s3 = 0;
	printf("Enter no. of terms: ");
	scanf("%d",&n);
	
	//using for loop
	for(i = 1; i <=n; i++){
		s1 = s1 + i;
	}
	i = 1;
	
	//using while loop
	while(i<=n){
		s2 = s2 +i;
		i++;
	}
	i = 1;
	
	//using dowhile loop
	do{
		s3 = s3 + i;
		i++;
	}while(i <= n);
	
	printf("Sum using for loop: %d\n",s1);
	printf("Sum using while loop: %d\n",s2);
	printf("Sum using do while loop: %d",s3);
}
