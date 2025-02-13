#include <stdio.h>
#include <time.h>

void mean_and_timestamp(int buffer[],double *mean,struct timespec *timestamp) {
    double sum = 0.0;

    for (int i = 0; i < 10; i++) {
        sum += buffer[i];
    }
    *mean = sum/10;

    clock_gettime(CLOCK_MONOTONIC,timestamp);
}
int main() {
    double mean; // the mean will be a float
    int buffer[10]; // an array of 10 integers
    struct timespec timestamp; // struct stores related variables

    int count = 0; // initialize the count for inputting 10 ints
    while (count < 10){
        int num;
        printf("Enter an integer(%d/10): ",count + 1);

        if (scanf("%d",&num) != 1) {
            printf("Invalid input, please input a number (0-9000)\n");
            continue;
        }

        if (num < 0 || num > 9000) {
            printf("Invalid input, please input a number (0-9000)\n");
            continue;
        }

        buffer[count++] = num;
    }

    mean_and_timestamp(buffer,&mean,&timestamp);

    printf("Results: \n");
    printf("Mean: %.2f\n", mean);
    printf("Timestamp: %ld seconds, %ld nanoseconds\n",timestamp.tv_sec,timestamp.tv_nsec);
}