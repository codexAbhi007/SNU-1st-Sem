//Calculate size of datatypes

#include <stdio.h>

int main(){
	int a; char b; float c; double d;
	
	printf("The size of int is %d\n",sizeof(a));
	printf("The size of char is %d\n",sizeof(b));
	printf("The size of float is %d\n",sizeof(c));
	printf("The size of double is %d",sizeof(d));
	
	return 0;
}
