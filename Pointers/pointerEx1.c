#include <stdio.h>

int main() {
	int num = 5;
	int *ptr = &num;

	printf("Value of num: %d\n", num);
	printf("Address of num: %p\n", (void*)&num);
	printf("Value of ptr: %p\n", (void*)ptr);
	printf("Dereferenced value: %d\n", *ptr);

	return 0;
} 
