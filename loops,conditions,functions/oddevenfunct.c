#include<stdio.h>

void odd(int,int);
void even(int,int);

int main(){
	int a,b;

	printf("Enter the Staring Number: ");
	scanf("%d",&a);
	printf("Enter the Ending Number: ");
	scanf("%d",&b);

	printf("\n");
	odd(a,b);

	printf("\n");
	even(a,b);

	return 0;
}

void odd(int start, int end){
	
	printf("Odd numbers are:");
	printf("\n");
	while(start <= end){
		if((start%2) != 0 ){
			printf("%d\n",start);
		}
		start += 1;
	}
}

void even(int start, int end){

	printf("Even numbers are:");
	printf("\n");
	while(start <= end){
		if((start%2) == 0){
			printf("%d\n",start);
		}
		start += 1;
	}
}
