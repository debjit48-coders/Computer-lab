#include <stdio.h>

int main(){
	unsigned int units;
	float bill;
	printf("enter no. of units consumed: ");
	scanf("%d",&units);
	int x=units/100;
	switch(x){
		case 0:
			bill=units*5;
			break;
		case 1:
			bill=(units%100)*7+100*5;
			break;
		default:
			bill=(units-200)*10+500+700;					
	}
	printf("the total bill is %f",bill);
	return 0;
}