#include<stdio.h>

int main(){

	char arr[] = "Roshan";
	int length = sizeof(arr)/sizeof(char);
	for(int i=0; i < length; i++){
		printf("%c\n",arr[i]);
	}

	return 0;
}
