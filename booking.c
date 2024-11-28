#include<stdio.h>
#include<string.h>

int train(int, int, int);
int bus(int, int, int);
int flight(int, int, int);

int main(){
	int dd,mm,seats;
	int mode;

	printf("Welcome to Roshan Travels!!\n");
	printf("Book tickets for Coimbatore - Chennai\n");
	
	printf("Enter the month: ");
	scanf("%d",&mm);

	printf("Enter the date: ");
	scanf("%d",&dd);

	printf("How many tickets you want: ");
	scanf("%d",&seats);

	printf("Book your seats:-\n");
	printf("For Train enter '1'\n");
	printf("For Bus enter '2'\n");
	printf("For Flight enter '3'\n");

	scanf("%d",&mode);

	if(mode == 1){
		train(dd,mm,seats);
	}
	else if(mode == 2){
		bus(dd,mm,seats);
	}
	else if(mode == 3){
		flight(dd,mm,seats);
	}
	else{
		printf("Error! Try again later\n");
	}

	return 0;
}

int train(int date, int month,int seats){

	int select;
	char class[20];
	printf("For sleeper class Enter 1\n For Non sleeper class Enter 2 \n :");
	scanf("%d",&select);

	if(select == 1){
		strcpy(class, "Sleeper");
	}
	else if(select == 2){
		strcpy(class,"Non_Sleeper");
	}
	else{
		strcpy(class, "Not_classified");
	}

	for(int i = 0; i < month; i++){
		printf("*");
	}

	printf("Booked successfully\n");
	printf("Ticket Details: \n");

	printf("Mode : Train \n Seats : %d \n Date : %d.%d.2024 \n class : %s\n",seats,date,month,class);

	return 0;

}

int bus(int date, int month,int seats){

        int select;
        char type[30];
        printf("For sleeper-A/c class Enter 1\n For semi sleeper- Non A/c class Enter 2 \n :");
        scanf("%d",&select);

        if(select == 1){
               strcpy(type,"Sleeper- A/c");
        }
        else if(select == 2){
               strcpy(type,"Semi_Sleeper- Non A/C");
        }
        else{
               strcpy(type, "Not_classified");
        }

        for(int i = 0; i < month; i++){
                printf("*");
        }

        printf("Booked successfully\n");
        printf("Ticket Details: \n");

        printf("Mode : Bus \n Seats : %d \n Date : %d.%d.2024 \n Type : %s\n",seats,date,month,type);

        return 0;

}
int flight(int date, int month,int seats){

        int select;

        printf("For Business class Enter 1\n For Economy class Enter 2 \n :");
        scanf("%d",&select);

	char class[20];

        if(select == 1){
               strcpy(class, "Business_Class");
        }
        else if(select == 2){
               strcpy(class, "Economy_Class");
        }
        else{
               strcpy(class, "Not_classified");
        }

        for(int i = 0; i < month; i++){
                printf("*");
        }

        printf("Booked successfully\n");
        printf("Ticket Details: \n");

        printf("Mode : Flight \n Seats : %d \n Date : %d.%d.2024 \n class : %s\n",seats,date,month,class);

        return 0;

}


