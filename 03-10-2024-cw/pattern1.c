//WAP to print pattern1 (reverse pyramid)

#include <stdio.h>

int main()
{
	int rows;
	printf("Enter No of rows: ");
	scanf("%d",&rows);
	int i,j;
	for(i = 1; i<=rows;i++){
		for(j=1; j<=2*rows-1; j++){
			if (j>= rows-(rows-i) && j <= rows+(rows-i))
				printf("*");
			else 
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
