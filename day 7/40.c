#include <stdio.h>

int main(){
	unsigned int parcel,z;
	printf("enter weight: ");
	scanf("%d",&parcel);
	int x=parcel/10;
	switch(x){
		case 0:
			z=parcel*30;
			printf("%d",z);
			break;
		case 1:
			z=(parcel-10)*20+300;
			printf("%d",z);
			break;
		case 2:
			z=(parcel-10)*20+300;
			printf("%d",z);
			break;
		default:
			z=(parcel-30)*15+300+400;
			printf("%d",z);
	}
	return 0;
}