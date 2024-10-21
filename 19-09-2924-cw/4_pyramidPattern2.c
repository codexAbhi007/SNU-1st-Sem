#include <stdio.h>

int main(){
	int n,i=0,j=0;
	printf("Enter no of rows: ");
	scanf("%d",&n);
	
	for (i = 1; i <=n; i++){
		for(j = 1; j<=n; j++){
			if (j>=i){
				printf(" * ");
			}
			else{
				printf("   ");
			}	
		}
		printf("\n");
	}
}
