#include<stdio.h>
#include<string.h>

int password(long);
void name();
int dob(int, int, int);
void phnum(int);
int main(){
	long pass= 1234567890;
	int dd, mm, yyyy;
	int value;
	int verification = 10;
	int retry;

	name();
	printf("Enter the date you born: ");
	scanf("%d",&dd);
	printf("Enter the month you born: ");
	scanf("%d",&mm);
	printf("Enter the year you born: ");
	scanf("%d",&yyyy);

	dob(dd, mm, yyyy);
	value = dob(dd, mm, yyyy);

	if(value == 1){
		printf("You are eligible!\n");
	}else{
		printf("You are not eligible\n");
	}

	phnum(verification);

	password(pass);
	retry = password(pass);

	if (retry == 1){
		password(pass);
	} 


	return 0;
}

void name(void)
{
	char name[30];
	
	printf("Enter your Name: ");
	scanf("%s", name);
	printf("Hello %s, kindly fill the following details\n", name);

}

int dob(int date, int month, int year){

	int eligibility = 2024;

	int count = 1, recount = 1;

	printf("loading...\n");

	while(count <= date){
		printf("/");
		count ++;
	}

	printf("\n");

	while(recount <= month){
		printf("|");
		recount ++;
	}
	printf("\n");

	int agecheck = eligibility - year;

	if(agecheck >= 20){
		return 1;
	}
	else{
		return 0;
	}

}

void phnum(int length){
	char mobilenumber[12];
	int numlength;

	printf("Enter your phone number: ");
	scanf("%s", mobilenumber);

	numlength = strlen(mobilenumber);
	if (length == numlength){
		printf("verified ;)\n");
	}
	else{
		printf("verification pending :(\n");
	}
}

int password(long code){
	
	long usercode;

	printf("Enter the Password: ");
	scanf("%li",&usercode);

	if (usercode == code){
		printf("LOGIN SUCCESSFULL!!");
	}
	else{
		printf("WRONG PASSWORD");
		return 1;
	}

	return 0;
}
