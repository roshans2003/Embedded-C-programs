#include<stdio.h>

int main(){

	int num,start=1;
	char star,space;

	printf("Enter a even number:\n");
	scanf("%d",&num);

	int i = start;
	while(i <= num){
		if (i == 1){
			space = " " * (num / 2);
			star = "*" * i;
			print("%c,%c,%c\n",space,star,space);
		}
		if (i > 1){
			space = " "*((num/2)2);
			star = "*" * i;
			print("%c,%c,%c\n",space,star,space);
		}
	}
	return 0;
}

