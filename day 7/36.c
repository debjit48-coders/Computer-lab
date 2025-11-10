#include <stdio.h>

int main(){
	unsigned int n;
	int flag=0;
	printf("enter age: ");
	scanf("%d",&n);
	int x=n/10;
	int d=n%10;
	switch(x){
		case 0:
			break;
		case 1:
			switch(d){
				case 8:
					flag=1;
					break;
				case 9:
					flag=1;
					break;
				default:
					break;
			}
		default:
			flag=1;
			break;
	}
	if(flag==1)
	printf("can vote");
	else
	printf("cannot vote");
	
	return 0;
}