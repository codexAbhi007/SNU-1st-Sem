//Distance between two coordinate points

#include <stdio.h>
#include <math.h>

int main(){
	int x1,y1,x2,y2,d;
	printf("Enter point 1 x coordinate:\n");
	scanf("%d",&x1);
	printf("Enter point 1 y coordinate:\n");
	scanf("%d",&y1);
	
	printf("Enter point 2 x coordinate:\n");
	scanf("%d",&x2);
	printf("Enter point 2 y coordinate:\n");
	scanf("%d",&y2);
	
	d = sqrt(pow(x1-x2,2) + pow(y1-y2,2));
	printf("Distance between (%d,%d) and (%d,%d) is %d",x1,y1,x2,y2,d);
	
	return 0;
}
