#include <stdio.h>

int main(){
	int a,b,c;
	printf("enter base: ");
	scanf("%d",&a);
	printf("enter height: ");
	scanf("%d",&b);
	printf("enter hypotenuse: ");
	scanf("%d",&c);
	float area=0.5*a*b;
	float peri=a+b+c;
	if(area==peri)
	printf("equable");
	else
	printf("non equable");
	return 0;
}