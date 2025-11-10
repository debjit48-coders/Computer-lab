#include <stdio.h>

int main(){
	int n;
	char choice;
	printf("enter no. and choice(a,b,c): ");
	scanf("%d %c",&n,&choice);
	switch(choice){
		case 'a':
			if(n%10==7||n%7==0)
			printf("buzz");
			else
			printf("not buzz");
			break;
		case 'b':
			if(n%2==0)
			printf("even");
			else
			printf("odd");
			break;
		case 'c':
			if(n>0)
			printf("positive");
			else if(n<0)
			printf("negative");
			else
			printf("zero");
			break;
		default:
			printf("please enter a valid choice");
	}
	return 0;
}