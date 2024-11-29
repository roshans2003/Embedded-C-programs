#include<stdio.h>
#include"math.h"

int math(int x, int y){

	int add = x + y;
	int sub = x - y;
	int mult = x * y;
	float div = x / y;

	printf("Addition of two number is: %d\n",add);
	printf("Subtraction of two number is: %d\n" ,sub);
	printf("multiplication of two number is: %d\n",mult);
	printf("Division of two number is: %f\n",div);

	return 0;
}


