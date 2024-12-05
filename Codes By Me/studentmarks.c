#include <stdio.h>

float average(int[]);
float percentage(int);

//calculating average and percentage of five marks using array and pointer functions

int main() {
    int score[5];
    char name[30];
    int total = 0;

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter the marks obtained:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d : ", i + 1);
        scanf("%d", &score[i]);
        if (score[i] >= 100) {
            printf("Invalid Marks. Marks should be less than 100.\n");
            return 1; // Exit the program
        }
    }

    for (int l = 0; l < 5; l++) {
        total = total + score[l];
    }

    if (total <= 500) {
        float (*ptr1)(int[]) = &average;
        float a = (*ptr1)(score);

        float (*ptr2)(int) = &percentage;
        float p = (*ptr2)(total);

        printf("*****************\n");
        printf("Student Report :\n");
        printf("Student Name : %s\n", name);
        printf("Marks:\n");

        for (int z = 0; z < 5; z++) {
            printf("Subject %d : %d\n", z + 1, score[z]);
        }

        printf("Total Score : %d\n", total);
        printf("Percentage : %.2f%%\n", p);
        printf("Average : %.2f\n", a);
    } else {
        printf("Invalid Total Marks. Total exceeds maximum possible marks (500).\n");
    }

    return 0;
}

float average(int score[]) {
    int value = 0;
    for (int k = 0; k < 5; k++) {
        value += score[k];
    }
    return (float)value / 5;
}

float percentage(int totalmarks) {
    return (float)totalmarks / 5;
}

