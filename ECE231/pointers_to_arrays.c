#include <stdio.h>
int main() {
    // Declare and initialize an integer array
    int numbers[] = {1, 2, 3, 4, 5};
    // Declare a pointer to an integer
    int *ptr;
    // Point the pointer to the first element of the array
    ptr = numbers;
    // Modify the second element through the pointer
    *(ptr + 1) = 10;
    // Print the modified array
    for (int i = 0; i < 5; ++i) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    return 0;
}