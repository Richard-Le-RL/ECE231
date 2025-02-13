#include <stdio.h>
// Swap function definition: Swaps the values of two integers by reference
void swap(int *a, int *b) {
// Use a temporary variable to perform the swap
int temp = *a;
*a = *b;
*b = temp;
}
// Main function
int main(void) {
// Variables to store user input
int number1, number2;
// Prompt user for two integers
printf("Enter two integers: ");
scanf("%d %d", &number1, &number2);
// Print the original values
printf("Before swapping: %d and %d\n", number1, number2);
// Call the swap function to swap the values
swap (&number1, &number2);
// Print the swapped values
printf("After swapping: %d and %d\n", number1, number2);
return 0;
}