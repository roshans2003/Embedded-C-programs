#include<stdio.h>

/*function prototype or function declaration*/
int sum(int,int);

//function definiton and formal arguments
int sum(int a,int b){
	int result;
	result = a+b;
	return result;
}

int main(){
	int m,n,result;

	printf("Enter a number: \n");
	scanf("%d",&m);
	printf("Enter another number \n");
	scanf("%d",&n);
	printf("\n");
	//function call
	result = sum(m,n);
	printf("sum is: %d\n",result);
	return 0;
}
