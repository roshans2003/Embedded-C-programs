#include<stdio.h>

int main()
{
	int n;
	int index;
	int *ptr;
	ptr = &n;

	printf("Enter the Size of the array: ");
	scanf("%d",&n);
	printf("\n");

	int arr[n];
	
	for(int i = 0; i < *ptr; i++)
	{
		printf("Enter the element for %d index: ",i);
		scanf("%d",&arr[i]);
		printf("\n");
	}

	printf("Enter the index value to access the element: ");
	scanf("%d",&index);

	int result = arr[index];

	printf("%d is present in the index %d.",result,index);

	return 0;
	
}


