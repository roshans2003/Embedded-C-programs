#include <stdio.h>

int main(){
	int smaller, a,b,c;;
	printf("enter three numbers:\n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	if (a<b && a<c){
		smaller = a;
	}else if(b<a && b <c){
		smaller = b;
	}else if(c<a && c<b){
		smaller = c;
	}
	printf("smallest number is:%d\n",smaller);

	return  0;
}

