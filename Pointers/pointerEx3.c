#include <stdio.h>

int main(){

	int num = 10;
	int *ptr = &num;
	int **dptr = &ptr;

	printf("Value of num: %d\n",num);
	printf("Value of ptr: %p\n", (void*)ptr);
	printf("Value of dptr: %p\n",(void*)dptr);
	printf("Deference dptr: %d\n", **dptr); //double pointer 

	return 0;
} 
