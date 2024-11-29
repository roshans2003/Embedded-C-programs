#include<stdio.h>

long factorial(long);

int main(){
	long a,result;
	printf("Enter a number to find the factorial: \n");
	scanf("%ld",&a);

	result = factorial(a);
	printf("%ld\n",result);

	return 0;
}

long factorial(long x){
	long num = 1;
	long factorial=1;
	while (num <= x){
		factorial = factorial * num;
		num++;
	}
	return factorial;
}





