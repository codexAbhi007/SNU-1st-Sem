//WAP to print count of prime digits

#include <stdio.h>
#include <math.h>
int main()
{
	int n,count=0,b=0;
	printf("Enter Number: ");
	scanf("%d",&n);
	int c =n,d;
	int i;
	while(c> 0){
		d = c%10;
		for(i=1;i<=sqrt(d);i++){
			if(d%i == 0){
				b = b + 1;
			}
		}
		if(b==1){
			count += 1;
		}
		c = c/10;
		b = 0;
	}
	
	printf("No of prime digits : %d",count);
}
