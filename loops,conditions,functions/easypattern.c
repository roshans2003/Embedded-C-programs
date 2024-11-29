#include<stdio.h>

int main()
{
	int num,i,j;
	printf("Enter a number: \n");
	scanf("%d",&num);
	i = 1;
	while(i<=num){
		j = 1;
		while(j <= i){
			printf("* ");
			j +=1;
		}
		printf("\n");
		i+= 1;
	}
	return 0;
}
