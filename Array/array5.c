#include<stdio.h>

int main(){
	char arr[]= "Roshan";
	int length = sizeof(arr)/sizeof(char);

	for(int i=length; i >= 0; i--){
		printf("%c",arr[i]);
	}

	return 0;
}

