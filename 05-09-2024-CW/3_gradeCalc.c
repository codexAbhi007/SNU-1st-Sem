//Grade calculation 

#include <stdio.h>

int main(){
	int marks;
	char grade = 'F';
	printf("Enter marks: ");
	scanf("%d",&marks);
	
	if (marks >= 90)
		grade = 'O';
	else if(marks >= 80 && marks <= 89)
		grade = 'A';
	else if(marks >= 70 && marks <= 79)
		grade = 'B';
	else if(marks >= 60 && marks <= 69)
		grade = 'C';
	else if( marks >= 50)
		grade = 'D';
	
	printf("Marks: %d and Grade is %c",marks,grade);
}
