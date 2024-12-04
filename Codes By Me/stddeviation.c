#include <stdio.h>
#include <math.h>

//program for to find the standard deviation of sequence of six numbers

int main() { 
    int arr[6];             
    float x = 0;           
    float mean = 0;
    float xdash[6];        
    float xsq[6];         
    float result1, result2;

    printf("Enter 6 numbers to find the standard deviation:\n");
    for (int i = 0; i < 6; i++) {   
        scanf("%d", &arr[i]);
        if (i < 5) {
            printf("Next?\n");
        }
    }

    for (int j = 0; j < 6; j++) {
        mean = mean + arr[j];
    }
    mean = mean / 6;            

    for (int k = 0; k < 6; k++) {
        xdash[k] = arr[k] - mean;
    }

    for (int l = 0; l < 6; l++) {
        xsq[l] = xdash[l] * xdash[l];
    }

    for (int m = 0; m < 6; m++) {
        x = x + xsq[m];
    }

    result1 = x / 6;          
    result2 = sqrt(result1);
    printf("The standard deviation for the above sequence is\n aproximately: %0.1f\n", result2);

    return 0;
}

