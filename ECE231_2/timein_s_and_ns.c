/***************************************************
This program records one time value and prints in
seconds and nanoseconds
Date Author Revision
02/05/2024 Fatima Anwar initial version
***************************************************/
#include<stdio.h>
#include<time.h>
int main(){
    struct timespec now1, now2;
    clock_gettime(CLOCK_REALTIME, &now1);
    clock_gettime(CLOCK_MONOTONIC, &now2);
    printf("Current real time is: %lu sec and %lu nanoseconds\n", now1.tv_sec, now1.tv_nsec);
    printf("Current monotonic time is: %lu sec and %lu nanoseconds\n", now2.tv_sec, now2.tv_nsec);
}