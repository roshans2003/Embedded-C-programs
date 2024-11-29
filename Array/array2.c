#include<stdio.h>

int main(){
        int arr[5];
	int sum = 0;

        for(int i = 0; i <5; i++){
                printf("Enter number for %d index\n",i);
		scanf("%d",&arr[i]);
        }

	int j = 0;
        for(j = 0; j < 5; j++){
		sum = sum + arr[j];
	} 
	printf("Sum of values in the array is: %d\n",sum);

        return 0;
}

