#include <stdio.h>

int main() {
    int num;
    int buffer[10]; 

    printf("Enter an integer in the range (0-9000) please: ");

    if (scanf("%d", &num) != 1) { 
        printf("Please enter a number between 0 and 9000\n");
        return 1;
    }

    if (num < 0 || num > 9000) { 
        printf("Please enter a number between 0 and 9000\n");
        return 1;
    }

    buffer[0] = num; // Store input into the first index of the buffer array

    printf("Stored %d in buffer[0]\n", buffer[0]);
    return 0;
}
