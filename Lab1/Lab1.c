#include <stdio.h>
#include <time.h>

void mean_and_timestamp(int buffer[],double *mean,struct timespec *timestamp) {
    int sum = 0;

    for (int i = 0; i < 10; i++) {
        sum += buffer[i];
    }
    *mean = sum/10;

    clock_gettime(CLOCK_MONOTONIC,timestamp);
}
int main() {
    double mean; // we can make the mean an int later 
    int buffer[10]; // an array of 10 integers
    struct timespec timestamp; // struct stores related variables

    int round = 0; 
    while (round < 2) {
        int count = 0; 
        printf("This is round %d\n",round+1);
        while (count < 10){
            int num;
            printf("Enter an integer(%d/10): ",count + 1);
            int x = scanf("%d",&num); 

            if (x != 1) {
                printf("Invalid input, please input a number (0-9000)\n");
                while (getchar() != '\n'); // discard the invalid input
                continue;
            }

            if (num < 0 || num > 9000) {
                printf("Invalid input, please input a number (0-9000)\n");
                continue;
            }

            buffer[count++] = num;
        }
        round++;
        mean_and_timestamp(buffer,&mean,&timestamp);

        printf("Results of round %d: \n",round);
        printf("Mean: %.2f\n", mean);
        printf("Timestamp: %ld seconds, %ld nanoseconds\n",timestamp.tv_sec,timestamp.tv_nsec);
    }
}