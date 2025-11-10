#include <stdio.h>

int main(){
	int basic;
	float a,b,c;
	printf("enter basic: ");
	scanf("%d",&basic);
	switch(basic){
		case 0:
			printf("the new salary is 0.");
			break;
		default:
			a=0.2*basic;
			b=0.1*basic;
			c=0.05*basic;
			printf("the new salary is %f.",basic+a+b+c);
	}
	
	return 0;
}