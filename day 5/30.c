#include <stdio.h>

int main(){
	unsigned int marks;
	char grade;
	printf("marks (out of 100): ");
	scanf("%d",&marks);
	if(marks>100){
		marks=100;
	}
	int x=marks*10/100;
	switch(x){
		case 10:
			grade='A';
			break;
		case 9:
			grade='A';
			break;
		case 8:
			grade='B';
			break;
		case 7:
			grade='C';
			break;
		default:
			grade='F';
	}
	printf("your grade is %c",grade);
	
	return 0;
}