/***************************************************
This program measures time difference of a sleep
event
Date Author Revision
02/05/2024 Fatima Anwar initial version
***************************************************/
#include<stdio.h>
#include <unistd.h>
#include<time.h>

int main(){
    struct timespec start;
    struct timespec end;
    long elapsed_time_in_nanosec;
    long elapsed_nanos;
    double elapsed_time_in_sec;
    long elapsed_time;
    clock_gettime(CLOCK_REALTIME, &start);
    sleep(5); // sleeps for specified seconds
    clock_gettime(CLOCK_REALTIME, &end);
    elapsed_nanos = end.tv_nsec - start.tv_nsec;
    elapsed_time_in_nanosec = (end.tv_sec - start.tv_sec)*1000000000 + elapsed_nanos;
    elapsed_time_in_sec = elapsed_time_in_nanosec / 1000000000.0;
    elapsed_time = (long) elapsed_time_in_sec;
    printf("Elapsed time is: %lf seconds and %lu nanoseconds\n", elapsed_time_in_sec, elapsed_nanos);
    printf("Elapsed time is: %lu seconds and %lu nanoseconds\n", elapsed_time, elapsed_nanos);
    return 0;
}