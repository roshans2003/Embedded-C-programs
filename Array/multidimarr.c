#include<stdio.h>

int main(){

	int a[2][3]={{10,20,30},{40,50,60}};

	printf("%d\n",*(*a+0)+1);
	printf("%d\n",*(*a+0)+2);

	return 0;
}
