#include <stdio.h>

int main() {

	int p =2, q = 3;
	int arr[2][3] = {
		{1, 2, 3},
		{4, 5, 6}

	};

	printf("The 2D array is: \n");

	for (int i=0; i<p; i++){
		for (int j = 0; j < q; j++){
			printf("%d ", arr[i][j]);
		}
	}
	printf("\n");
	return 0;
}

