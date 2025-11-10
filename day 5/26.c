#include <stdio.h>
int main(){
	char x;
	printf("enter operation ( + - * / ): ");
	scanf("%c",&x);
	float a,b;
	printf("enter the numbers: ");
	scanf("%f %f",&a,&b);
	switch(x){
		case('+'):
			printf("%f",a+b);
			break;
		case('-'):
			printf("%f",a-b);
			break;
		case('*'):
			printf("%f",a*b);
			break;
		case('/'):
			printf("%f",a/b);
			break;
		default:
			printf("please enter a valid operator");
	}
	return 0;
}