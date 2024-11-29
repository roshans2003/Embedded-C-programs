#include<stdio.h>

int main(){
	int start, end, count;

	printf("enter starting number\n");
	scanf("%d", &start);

	printf("enter ending number\n");
	scanf("%d", &end);

	printf("Even numbers are:\n");
	int i = start;
	while(i <= end){
		if((i %2) == 0){
			printf("%d\n",i);
		}
		i  += 1;
	}

	printf("Odd numbers are:\n");
	int j = start;
	while(j <= end){
		if((j %2) != 0){
			printf("%d\n",j);
		}
		j += 1;
	}
}


