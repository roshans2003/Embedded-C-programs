#include<stdio.h>

int main(){
	int num;
	
	printf("Enter a number to find the factorial:\n");
	scanf("%d",&num);
	int i=1;
	int factorial = 1;
	while (i <= num){
		factorial = factorial * i;
		i +=1 ;
	}
	printf("Factorial of the given number is: \n");
	printf("%d\n",factorial);

	return 0;
}
	
