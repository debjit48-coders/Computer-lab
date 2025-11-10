#include <stdio.h>

int main(){
	int n[3],i,flag1=0,flag2=0,max=0;
	for(i=0;i<3;i++){
		int d;
		printf("enter no. ");
		scanf("%d",&d);
		n[i]=d;
	}
	if(n[0]==0&&n[1]==0&&n[2]==0)
	printf("all zeroes\n");
	else{
		if(n[0]==n[1]&&n[0]==n[2])
		printf("all equal\n");
		else{
			for(i=0;i<3;i++){
				if(n[i]>max);
				max=n[i];
			}
			printf("the greatest no. is %d\n",max);
		}
		for(i=0;i<3;i++){
			if(n[i]>=0)
			flag1++;
		}
		if(flag1==3)
		printf("all positive\n");
		else if(flag1==0)
		printf("all negative\n");
		else
		printf("mixed numbers\n");
	}
}