#include <stdio.h>
#include <time.h>

void mean_and_timestamp(int buffer[],double *mean,struct timespec *timestamp) { // timespec is used to store sec and nsec
    int sum = 0;                            

    for (int i = 0; i < 10; i++) {
        sum += buffer[i];
    }
    *mean = (sum/10); // pointer to mean, sets mean to sum/10
    clock_gettime(CLOCK_MONOTONIC,timestamp); // stores a sec and nsec into the timespec struct named timestamp
}

int main() {
    double mean; 
    int buffer[10]; 
    struct timespec timestamp; 

    int round = 0; 
    while (round < 2) {
        int count = 0; 
        printf("This is round %d\n",round+1);
        while (count < 10){
            int num;
            printf("Enter an integer(%d/10): ",count + 1);
            int x = scanf("%d",&num); 

            if (num < 0 || num > 9000) {
                printf("Invalid input, please input a number (0-9000)\n");
                continue;
            }

            buffer[count++] = num;
        }
        round++;
        mean_and_timestamp(buffer,&mean,&timestamp); // give memory addresses to custom function

        printf("Results of round %d: \n",round);
        printf("Mean: %d\n", (int) mean);
        printf("Timestamp: %ld seconds, %ld nanoseconds\n",timestamp.tv_sec,timestamp.tv_nsec); //tv_sec and tv+nsec are stored in the timespec structure named timestamp
    }
}